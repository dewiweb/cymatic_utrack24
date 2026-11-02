// rea decompile_all
// name: FUN_0048fb63
// address: 0x48fb63
// body: available
// range: 0x48fb63-0x48fc1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048fb63(void)

{
  int in_EAX;
  int *in_ECX;
  int *in_EDX;
  
  if ((in_ECX[6] - in_EAX <= in_EDX[6]) && (in_EDX[6] <= in_ECX[6] + in_EAX)) {
    if ((in_ECX[7] - in_EAX <= in_EDX[7]) && (in_EDX[7] <= in_ECX[7] + in_EAX)) {
      if ((*in_ECX - in_EAX <= *in_EDX) && (*in_EDX <= *in_ECX + in_EAX)) {
        if ((in_ECX[1] - in_EAX <= in_EDX[1]) && (in_EDX[1] <= in_ECX[1] + in_EAX)) {
          if ((in_ECX[2] - in_EAX <= in_EDX[2]) && (in_EDX[2] <= in_ECX[2] + in_EAX)) {
            if ((in_ECX[3] - in_EAX <= in_EDX[3]) && (in_EDX[3] <= in_ECX[3] + in_EAX)) {
              if ((in_ECX[4] - in_EAX <= in_EDX[4]) && (in_EDX[4] <= in_ECX[4] + in_EAX)) {
                if ((in_ECX[5] - in_EAX <= in_EDX[5]) && (in_EDX[5] <= in_ECX[5] + in_EAX)) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

