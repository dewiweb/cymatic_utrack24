// rea decompile_all
// name: FUN_00420014
// address: 0x420014
// body: available
// range: 0x420014-0x42015a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00420014(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  uVar2 = param_2;
  *(int *)(param_1 + 0x16c) = param_2;
  param_2 = (**(code **)(param_1 + 0x1fc))(param_1,0x6e616d65,param_2,&local_c);
  if (param_2 == 0) {
    iVar3 = FUN_004d021d();
    param_2 = FUN_00411560(uVar2,param_1 + 0x15c);
    if (param_2 == 0) {
      local_8 = *(int *)(param_1 + 0x160);
      uVar1 = local_8 * 0xc + 6 + iVar3;
      if ((uint)(iVar3 + local_c) < uVar1) {
        param_2 = 0x91;
      }
      else {
        *(undefined4 *)(param_1 + 0x160) = 0;
        uVar4 = FUN_00411976(0x14,0,&param_2);
        *(undefined4 *)(param_1 + 0x168) = uVar4;
        if ((param_2 == 0) && (param_2 = FUN_004111b5(), param_2 == 0)) {
          iVar5 = *(int *)(param_1 + 0x168);
          for (; local_8 != 0; local_8 = local_8 + -1) {
            param_2 = FUN_00411560(uVar2,iVar5);
            if ((param_2 == 0) && (*(ushort *)(iVar5 + 8) != 0)) {
              *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + *(int *)(param_1 + 0x164) + iVar3;
              if ((*(uint *)(iVar5 + 0xc) < uVar1) ||
                 ((uint)(iVar3 + local_c) < (uint)*(ushort *)(iVar5 + 8) + *(uint *)(iVar5 + 0xc)))
              {
                *(undefined4 *)(iVar5 + 0xc) = 0;
                *(undefined2 *)(iVar5 + 8) = 0;
              }
              else {
                iVar5 = iVar5 + 0x14;
              }
            }
          }
          *(int *)(param_1 + 0x160) = (iVar5 - *(int *)(param_1 + 0x168)) / 0x14;
          FUN_00411249();
          *(undefined2 *)(param_1 + 0x158) = *(undefined2 *)(param_1 + 0x160);
        }
      }
    }
  }
  return param_2;
}

