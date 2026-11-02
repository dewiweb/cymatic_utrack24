// rea decompile_all
// name: FUN_0041d416
// address: 0x41d416
// body: available
// range: 0x41d416-0x41d51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d416(void)

{
  int *in_EAX;
  char *pcVar1;
  int iVar2;
  int *in_EDX;
  int *piVar3;
  int iVar4;
  int local_c;
  int local_8;
  
  local_c = *in_EAX;
  if (local_c != 0) {
    pcVar1 = (char *)(in_EAX[2] + 0x15);
    do {
      if (((((pcVar1[-1] == '\x02') || (pcVar1[-1] == -2)) || (*pcVar1 == '\x02')) ||
          (*pcVar1 == -2)) && ((pcVar1[-5] & 0x10U) == 0)) {
        local_8 = *in_EDX;
        iVar4 = *(int *)(pcVar1 + 0xf);
        if (local_8 != 0) {
          piVar3 = in_EDX + 3;
          do {
            iVar2 = iVar4 - piVar3[1];
            if (iVar2 < -in_EDX[0x207]) break;
            iVar4 = *(int *)(pcVar1 + 0xf);
            if ((iVar4 <= *piVar3 + in_EDX[0x207]) &&
               (((char)in_EDX[0x208] != '\0' || (iVar2 <= in_EDX[0x206])))) {
              iVar2 = piVar3[4];
              *(uint *)(pcVar1 + -5) = *(uint *)(pcVar1 + -5) | 0x30;
              *(int *)(pcVar1 + 0x17) = iVar2;
            }
            local_8 = local_8 + -1;
            piVar3 = piVar3 + 8;
          } while (local_8 != 0);
        }
        local_8 = in_EDX[0x81];
        if (local_8 != 0) {
          piVar3 = in_EDX + 0x81 + local_8 * 8 + -4;
          do {
            if (piVar3[-1] - *(int *)(pcVar1 + 0xf) < -in_EDX[0x207]) break;
            if ((*piVar3 - in_EDX[0x207] <= *(int *)(pcVar1 + 0xf)) &&
               (((char)in_EDX[0x208] != '\0' ||
                (piVar3[-1] - *(int *)(pcVar1 + 0xf) < in_EDX[0x206])))) {
              iVar4 = piVar3[4];
              *(uint *)(pcVar1 + -5) = *(uint *)(pcVar1 + -5) | 0x30;
              *(int *)(pcVar1 + 0x17) = iVar4;
            }
            local_8 = local_8 + -1;
            piVar3 = piVar3 + -8;
          } while (local_8 != 0);
        }
      }
      local_c = local_c + -1;
      pcVar1 = pcVar1 + 0x30;
    } while (local_c != 0);
  }
  return;
}

