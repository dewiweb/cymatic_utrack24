// rea decompile_all
// name: FUN_0041c353
// address: 0x41c353
// body: available
// range: 0x41c353-0x41c428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c353(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  int *in_EAX;
  int *piVar3;
  int iVar4;
  
  puVar2 = param_3;
  iVar4 = *in_EAX;
  *param_3 = 0;
  piVar3 = in_EAX + 1;
  if (iVar4 != 0) {
    while (-in_EAX[0x207] <= param_1 - piVar3[3]) {
      if (param_1 <= piVar3[2] + in_EAX[0x207]) {
        if (((char)in_EAX[0x208] != '\0') || (param_1 - piVar3[3] <= in_EAX[0x206])) {
          uVar1 = piVar3[4];
          *param_3 = 1;
          param_3[1] = uVar1;
        }
        break;
      }
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + 8;
      if (iVar4 == 0) break;
    }
  }
  param_3 = (uint *)in_EAX[0x81];
  piVar3 = in_EAX + 0x81 + (int)param_3 * 8 + -7;
  if (param_3 != (uint *)0x0) {
    while (-in_EAX[0x207] <= piVar3[2] - param_2) {
      if (piVar3[3] - in_EAX[0x207] <= param_2) {
        if (((char)in_EAX[0x208] == '\0') && (in_EAX[0x206] <= piVar3[2] - param_2)) {
          return;
        }
        uVar1 = piVar3[4];
        *puVar2 = *puVar2 | 2;
        puVar2[2] = uVar1;
        return;
      }
      param_3 = (uint *)((int)param_3 + -1);
      piVar3 = piVar3 + -8;
      if (param_3 == (uint *)0x0) {
        return;
      }
    }
  }
  return;
}

