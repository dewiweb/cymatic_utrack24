// rea decompile_all
// name: FUN_00581010
// address: 0x581010
// body: available
// range: 0x581010-0x5811ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00581010(uint *param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int in_ECX;
  
  if ((int)(param_2 - *param_1) < 0x14) {
    uVar3 = (uint)param_1 & 0xffffff00;
  }
  else {
    *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)*param_1;
    *param_1 = *param_1 + 4;
    *(undefined2 *)(in_ECX + 0x14) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    uVar1 = *(ushort *)*param_1;
    *param_1 = *param_1 + 2;
    *(uint *)(in_ECX + 0x30) = uVar1 ^ 0x9d5f;
    *(undefined2 *)(in_ECX + 0x34) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *(ushort *)(in_ECX + 0x34) = *(ushort *)(in_ECX + 0x34) ^ 0xe519;
    *(undefined2 *)(in_ECX + 0x36) = *(undefined2 *)*param_1;
    *param_1 = *param_1 + 2;
    *(ushort *)(in_ECX + 0x36) = *(ushort *)(in_ECX + 0x36) ^ 0xa588;
    cVar2 = *(char *)*param_1;
    *param_1 = *param_1 + 1;
    *(bool *)(in_ECX + 0x38) = cVar2 != -0x41;
    *param_1 = *param_1 + 1;
    uVar3 = FUN_005965f0(in_ECX + 0x18,param_1,param_2);
    if ((uVar3 & 0xff) == 0) {
      uVar3 = uVar3 & 0xffffff00;
    }
    else {
      *param_1 = *param_1 + 1 & 0xfffffffe;
      cVar2 = FUN_005965f0(in_ECX + 0x20,param_1,param_2);
      if (cVar2 == '\0') {
        uVar3 = 0;
      }
      else {
        *param_1 = *param_1 + 1 & 0xfffffffe;
        uVar3 = FUN_005965f0(in_ECX + 0x28,param_1,param_2);
      }
    }
  }
  return uVar3;
}

