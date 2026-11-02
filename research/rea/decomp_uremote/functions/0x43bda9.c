// rea decompile_all
// name: FUN_0043bda9
// address: 0x43bda9
// body: available
// range: 0x43bda9-0x43c22e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043bda9(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar7;
  undefined1 *puVar8;
  int local_c0;
  undefined1 local_98 [32];
  double local_78;
  undefined1 local_6c [88];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e11a5;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar2 = FUN_0044bfc5();
  fVar1 = (float)*(int *)(iVar2 + 4) * 3.0;
  FUN_0044bfc5();
  FUN_004d076d();
  FUN_0047d23a();
  iVar2 = *(int *)(in_ECX + 0x18);
  iVar3 = FUN_0044bfc5();
  iVar3 = *(int *)(iVar3 + 0x14);
  FUN_004d076d();
  FUN_0047cda7();
  FUN_0047d575();
  if (*(int *)(in_ECX + 0x90) == 1) {
    FUN_0046537e();
    local_c = 0;
    FUN_004cefd8();
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_004652d6();
    FUN_00478a11(local_98,0x3dcccccd,0x3dcccccd);
    FUN_004d076d();
    FUN_0047cda7();
    puVar8 = local_6c;
    FUN_00477435(fVar1,fVar1,puVar8);
    FUN_0047713c(puVar8);
    FUN_0047d2ae();
  }
  else {
    if (*(int *)(in_ECX + 0x90) != 2) {
      FUN_004d076d();
      FUN_0047cda7();
      iVar4 = FUN_005b3fb0();
      local_c0 = 0;
      local_78 = (double)(((float)iVar2 - fVar1) * 0.5 + fVar1 * 0.25);
      do {
        iVar2 = FUN_005b3fb0();
        FUN_004d076d();
        FUN_0047cda7();
        FUN_0047d49c((float)(iVar2 - iVar3),(float)(iVar4 - iVar3));
        local_c0 = local_c0 + 1;
      } while (local_c0 < 3);
      goto LAB_0043c17b;
    }
    FUN_0047888f();
    local_c = 3;
    FUN_00478b0d();
    FUN_00478ba1();
    FUN_00478b0d();
    FUN_00478ba1();
    FUN_00478a11(extraout_ECX,0x3e4ccccd,0x3e4ccccd);
    FUN_004d076d();
    FUN_0047cda7();
    puVar8 = local_6c;
    FUN_00477435(fVar1,fVar1,puVar8);
    FUN_0047713c(puVar8);
    FUN_0047baf0(fVar1 * 0.1);
    FUN_0047d2d0(extraout_ECX);
  }
  local_c = 0xffffffff;
  FUN_004f7994();
LAB_0043c17b:
  if (**(char **)(in_ECX + 0x8c) != '\0') {
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0044bfc5();
    FUN_0049f81a();
    local_c = 4;
    FUN_0047ceaa();
    puStack_10 = (undefined1 *)0xffffffff;
    FUN_004c4d7a();
    uVar7 = *(undefined4 *)(in_ECX + 0x18);
    uVar5 = FUN_005b3fb0();
    uVar6 = FUN_005b3fb0(uVar7,uVar5);
    FUN_0047d02d(param_1,(undefined4 *)(in_ECX + 0x8c),0,uVar6,uVar7,uVar5);
  }
  ExceptionList = local_14;
  return;
}

