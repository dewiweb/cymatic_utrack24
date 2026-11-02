// rea decompile_all
// name: FUN_00417ab5
// address: 0x417ab5
// body: available
// range: 0x417ab5-0x417c95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00417ab5(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = param_2;
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 4);
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if ((iVar1 != 0) && (param_3 < *(uint *)(iVar1 + 0x198))) {
    if (((param_4 & 9) == 0) && (iVar5 = FUN_00418563(param_2), iVar5 == 0)) {
      return 0;
    }
    if ((param_4 & 0x4000) == 0) {
      iVar9 = param_3 * 0x10 + *(int *)(iVar1 + 0x1a0);
      *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
      *(undefined2 *)(param_1 + 0x6e) = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
      iVar5 = FUN_0041767b(*(undefined4 *)(iVar1 + 0x68),*(undefined4 *)(iVar1 + 0xbc),
                           *(undefined4 *)(iVar9 + 0xc),*(undefined4 *)(iVar9 + 8));
      if (iVar5 != 0) {
        return iVar5;
      }
      puVar10 = (undefined4 *)(*(int *)(param_1 + 0xbc) + 0x14);
      puVar11 = (undefined4 *)(param_1 + 0x6c);
      for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      param_1._3_1_ = ~(byte)param_4 & 1;
      uVar6 = *(uint *)(iVar3 + 0x7c) & 0xfffffffe;
      *(uint *)(iVar3 + 0x7c) = uVar6 | 4;
      if ((param_2 != 0) && (*(ushort *)(param_2 + 0xe) < 0x18)) {
        *(uint *)(iVar3 + 0x7c) = uVar6 | 0x104;
      }
      *(undefined4 *)(iVar3 + 0x28) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      uVar7 = *(undefined4 *)(iVar9 + 4);
      if (*(int *)(iVar1 + 0x130) != *(int *)(iVar1 + 300)) {
        uVar7 = FUN_0040d230(*(int *)(iVar1 + 300));
      }
      if ((*(byte *)(iVar1 + 0x144) & 1) == 0) {
        *(undefined4 *)(iVar3 + 0x28) = uVar7;
      }
      else {
        *(undefined4 *)(iVar3 + 0x34) = uVar7;
      }
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar3 + 0x34);
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      if (param_1._3_1_ != 0) {
        uVar7 = *(undefined4 *)(param_2 + 0x10);
        param_2 = 0;
        puVar10 = *(undefined4 **)(iVar3 + 0x70);
        uVar2 = *(undefined4 *)(iVar4 + 0x14);
        if (0 < *(short *)(iVar3 + 0x6e)) {
          do {
            uVar8 = thunk_FUN_00401000(*puVar10,uVar7);
            *puVar10 = uVar8;
            uVar8 = thunk_FUN_00401000(puVar10[1],uVar2);
            puVar10[1] = uVar8;
            param_2 = param_2 + 1;
            puVar10 = puVar10 + 2;
          } while (param_2 < *(short *)(iVar3 + 0x6e));
        }
        uVar7 = thunk_FUN_00401000(*(undefined4 *)(iVar3 + 0x28),uVar7);
        *(undefined4 *)(iVar3 + 0x28) = uVar7;
        uVar7 = thunk_FUN_00401000(*(undefined4 *)(iVar3 + 0x34),uVar2);
        *(undefined4 *)(iVar3 + 0x34) = uVar7;
      }
      FUN_004106d2();
      *(int *)(iVar3 + 0x18) = local_18 - local_20;
      *(int *)(iVar3 + 0x20) = local_20;
      *(int *)(iVar3 + 0x1c) = local_14 - local_1c;
      *(int *)(iVar3 + 0x24) = local_14 - (local_14 - local_1c);
      return 0;
    }
  }
  return 6;
}

