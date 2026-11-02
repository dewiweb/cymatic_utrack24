// rea decompile_all
// name: FUN_0048f554
// address: 0x48f554
// body: available
// range: 0x48f554-0x48f5b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048f554(void)

{
  int in_EAX;
  undefined4 in_ECX;
  
  if (*(int *)(in_EAX + 0x50) == 0) {
    switch(in_ECX) {
    default:
      *(char **)(in_EAX + 0x50) = "unexpected zlib return code";
      break;
    case 1:
      *(char **)(in_EAX + 0x50) = "unexpected end of LZ stream";
      return;
    case 2:
      *(char **)(in_EAX + 0x50) = "missing LZ dictionary";
      return;
    case 0xfffffff9:
      *(char **)(in_EAX + 0x50) = "unexpected zlib return";
      return;
    case 0xfffffffa:
      *(char **)(in_EAX + 0x50) = "unsupported zlib version";
      return;
    case 0xfffffffb:
      *(char **)(in_EAX + 0x50) = "truncated";
      return;
    case 0xfffffffc:
      *(char **)(in_EAX + 0x50) = "insufficient memory";
      return;
    case 0xfffffffd:
      *(char **)(in_EAX + 0x50) = "damaged LZ stream";
      return;
    case 0xfffffffe:
      *(char **)(in_EAX + 0x50) = "bad parameters to zlib";
      return;
    case 0xffffffff:
      *(char **)(in_EAX + 0x50) = "zlib IO error";
      return;
    }
  }
  return;
}

