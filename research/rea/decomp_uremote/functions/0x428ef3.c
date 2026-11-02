// rea decompile_all
// name: FUN_00428ef3
// address: 0x428ef3
// body: available
// range: 0x428ef3-0x429082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00428ef3(int *param_1,undefined4 param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_8;
  
  iVar1 = *param_1;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  *(undefined1 *)((int)param_1 + 0x12d) = 0;
  param_1[0x1e] = (uint)*(ushort *)(iVar1 + 0x118);
  param_1[0x21] = (uint)*(ushort *)(iVar1 + 0x11a);
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x3c] = *(int *)(iVar1 + 0x29c);
  *(undefined2 *)(param_1 + 0x3e) = *(undefined2 *)(iVar1 + 0x116);
  *(undefined1 *)((int)param_1 + 0x6d) = 0;
  *(undefined1 *)((int)param_1 + 0x6e) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar3 = FUN_00411976(0x14,0,&local_8);
  param_1[0x1f] = iVar3;
  if (local_8 == 0) {
    iVar3 = FUN_00411976(0x14,0,&local_8);
    param_1[0x22] = iVar3;
    if (local_8 == 0) {
      iVar3 = FUN_00411976(4,0,&local_8);
      param_1[0x3d] = iVar3;
      if (local_8 == 0) {
        iVar3 = FUN_00411976(4,0,&local_8);
        param_1[0x3f] = iVar3;
        if (local_8 == 0) {
          sVar2 = *(short *)(iVar1 + 0x114) + 4;
          local_8 = FUN_0042870c(sVar2);
          if (local_8 == 0) {
            *(short *)(param_1 + 0x42) = sVar2;
            piVar4 = &DAT_0090bce8;
            piVar5 = param_1 + 0x2b;
            for (iVar3 = 0x11; iVar3 != 0; iVar3 = iVar3 + -1) {
              *piVar5 = *piVar4;
              piVar4 = piVar4 + 1;
              piVar5 = piVar5 + 1;
            }
            iVar3 = *(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 4) + 0xac);
            *(int *)(iVar1 + 0x2b0) = iVar3;
            if (iVar3 == 0) {
              *(int *)(iVar1 + 0x2b0) = (int)FUN_0042c2d8;
            }
            local_8 = FUN_00428c7c(param_1,param_2);
            if (local_8 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  FUN_00428e4c();
  return local_8;
}

