// rea decompile_all
// name: FUN_00435d03
// address: 0x435d03
// body: available
// range: 0x435d03-0x435ecd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00435d03(undefined1 *param_1,int *param_2,uint param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  undefined1 *local_8;
  
  iVar4 = (int)param_1;
  iVar9 = *param_2;
  param_2 = (int *)0x0;
  if (iVar9 == 0) {
    param_2 = (int *)0x6;
  }
  else {
    iVar3 = *(int *)(iVar9 + 0x84);
    if ((iVar3 == 0) || (*(uint *)(iVar9 + 0x10) <= param_3)) {
      param_2 = (int *)0x6;
    }
    else {
      if (param_3 == 0) {
        uVar8 = (uint)*(byte *)(iVar3 + 0x6a);
      }
      else {
        uVar8 = param_3 - 1;
      }
      bVar10 = *(short *)(iVar3 + 4) == 0x300;
      pbVar1 = (byte *)(((uint)bVar10 * 2 + 4) * uVar8 + (!bVar10 - 1 & 0x1e) + 0x78 +
                       *(int *)(iVar3 + 0xa0));
      *(uint *)((int)param_1 + 0x50) = (int)(short)((short)(char)pbVar1[-1] << 8) | (uint)pbVar1[-2]
      ;
      if (bVar10) {
        bVar2 = *pbVar1;
        uVar8 = (uint)*(uint3 *)(pbVar1 + 1);
      }
      else {
        bVar2 = *pbVar1;
        uVar8 = (uint)pbVar1[1];
      }
      uVar8 = uVar8 << 8 | (uint)bVar2;
      if (uVar8 < *(uint *)(iVar3 + 8)) {
        local_8 = (undefined1 *)(*(int *)(iVar3 + 0xa0) + uVar8);
        iVar9 = *(int *)((int)param_1 + 0x50) + 7 >> 3;
        *(int *)((int)param_1 + 0x54) = iVar9;
        uVar7 = (uint)*(ushort *)(iVar3 + 0x60);
        *(uint *)((int)param_1 + 0x4c) = uVar7;
        *(undefined1 *)((int)param_1 + 0x5e) = 1;
        if (uVar7 * iVar9 + uVar8 < *(uint *)(iVar3 + 8)) {
          puVar5 = (undefined1 *)FUN_00411976(uVar7,0,&param_2);
          *(undefined1 **)((int)param_1 + 0x58) = puVar5;
          param_1 = puVar5;
          if (param_2 != (int *)0x0) {
            return (int)param_2;
          }
          for (; 0 < iVar9; iVar9 = iVar9 + -1) {
            puVar6 = local_8 + *(int *)(iVar4 + 0x4c);
            puVar5 = param_1;
            for (; local_8 < puVar6; local_8 = local_8 + 1) {
              *puVar5 = *local_8;
              puVar5 = puVar5 + *(int *)(iVar4 + 0x54);
            }
            param_1 = param_1 + 1;
          }
          *(undefined4 *)(*(int *)(iVar4 + 0x9c) + 4) = 1;
          *(undefined4 *)(iVar4 + 100) = 0;
          *(uint *)(iVar4 + 0x68) = (uint)*(ushort *)(iVar3 + 0x50);
          *(undefined4 *)(iVar4 + 0x48) = 0x62697473;
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x50) << 6;
          *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x4c) << 6;
          *(undefined4 *)(iVar4 + 0x20) = 0;
          *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x50) << 6;
          *(int *)(iVar4 + 0x24) = *(int *)(iVar4 + 0x68) << 6;
          FUN_0040f2e7();
          return (int)param_2;
        }
      }
      param_2 = (int *)0x3;
    }
  }
  return (int)param_2;
}

