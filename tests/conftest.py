import pytest
import networkx as nx


@pytest.fixture
def sample_graph():
    graph = nx.DiGraph()
    graph.add_edges_from([
        ("app", "core"),
        ("app", "math"),
        ("math", "core"),
        ("core_tests", "core"),
        ("math_tests", "math")
    ])
    return graph


@pytest.fixture
def complex_graph():
    """More complex graph with tests and external dependencies"""
    graph = nx.DiGraph()
    graph.add_edges_from([
        ("app", "core"),
        ("app", "math"),
        ("math", "core"),
        ("core_tests", "core"),
        ("math_tests", "math"),
        ("app", "external1"),
        ("math", "external2")
    ])
    return graph


@pytest.fixture
def cmake_content():
    """Sample CMake content for parsing tests"""
    return """
    add_library(core src/core.cpp)
    add_library(math src/math.cpp)
    add_executable(app src/main.cpp)
    target_link_libraries(math PUBLIC core)
    target_link_libraries(app PRIVATE core math)
    """
