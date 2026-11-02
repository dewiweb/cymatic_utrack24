// rea decompile_all
// name: FUN_004f374a
// address: 0x4f374a
// body: available
// range: 0x4f374a-0x4f3890 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f374a(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  int *piVar7;
  int *unaff_EBX;
  float10 fVar8;
  undefined1 *puStack_5c;
  uint uStack_58;
  undefined1 *puStack_54;
  float fStack_50;
  undefined1 local_34 [32];
  undefined1 *local_14;
  uint local_10;
  uint local_c;
  float local_8;
  
  uVar5 = param_2;
  fStack_50 = 7.274863e-39;
  cVar6 = FUN_004f36c5();
  if (cVar6 != '\0') {
    fStack_50 = 7.274886e-39;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x3c))();
    local_8 = (float)fVar8;
    local_14 = (undefined1 *)&puStack_5c;
    FUN_004f0b04();
    FUN_004bfa3c();
    puStack_54 = local_34;
    fStack_50 = local_8;
    uStack_58 = 0x4f379f;
    FUN_004f36e5();
    if (((param_2 == 2) || (param_2 == 5)) || (param_2 = param_2 & 0xffffff00, uVar5 == 8)) {
      param_2 = CONCAT31(param_2._1_3_,1);
    }
    if (((uVar5 == 6) || (uVar5 == 7)) || (local_c = local_c & 0xffffff00, uVar5 == 8)) {
      local_c = CONCAT31(local_c._1_3_,1);
    }
    if (((uVar5 == 1) || (uVar5 == 4)) || (local_10 = local_10 & 0xffffff00, uVar5 == 7)) {
      local_10 = CONCAT31(local_10._1_3_,1);
    }
    if (((uVar5 == 3) || (uVar5 == 4)) ||
       (local_14 = (undefined1 *)((uint)local_14 & 0xffffff00), uVar5 == 5)) {
      local_14 = (undefined1 *)CONCAT31(local_14._1_3_,1);
    }
    fStack_50 = 7.275095e-39;
    FUN_004c4e62();
    fStack_50 = (float)param_2;
    puStack_54 = (undefined1 *)local_c;
    uStack_58 = local_10;
    iVar1 = **(int **)(param_1 + 0x1c);
    puStack_5c = local_14;
    FUN_004c54d5();
    (**(code **)(iVar1 + 4))();
    piVar7 = (int *)FUN_004bfad2(local_8);
    iVar1 = *piVar7;
    iVar2 = piVar7[1];
    iVar3 = piVar7[2];
    iVar4 = piVar7[3];
    *unaff_EBX = iVar1;
    unaff_EBX[1] = iVar2;
    unaff_EBX[2] = iVar3 + iVar1;
    unaff_EBX[3] = iVar4 + iVar2;
  }
  return 1;
}

