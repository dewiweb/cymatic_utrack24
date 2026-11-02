// rea decompile_all
// name: FUN_004d3f61
// address: 0x4d3f61
// body: available
// range: 0x4d3f61-0x4d42ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d3f61(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int extraout_EDX;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005dfe7b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004c1e29();
  FUN_0047d23a();
  iVar2 = FUN_00440367();
  cVar1 = FUN_004ed2ba();
  if ((cVar1 != '\0') || (iVar3 = FUN_004eea01(), 2 < iVar3)) {
    iVar2 = FUN_00440367();
  }
  iVar3 = iVar2 / -10;
  if (*(int *)(param_2 + 0x98) != 0) {
    FUN_0047888f();
    local_c = 0;
    if (extraout_EDX == 2) {
      FUN_00479368(extraout_ECX,(float)iVar2 * 0.5 + (float)iVar3,(float)iVar3);
      FUN_0047a9dd();
      local_c._0_1_ = 1;
      FUN_00478907();
      local_c = (uint)local_c._1_3_ << 8;
      FUN_004f7994();
    }
    else {
      FUN_0043bc2d();
      FUN_00479493();
    }
    FUN_0049fe5a();
    local_c._0_1_ = 2;
    uVar4 = FUN_00465544();
    local_c._0_1_ = 3;
    uVar5 = FUN_0049f51e();
    local_c._0_1_ = 4;
    FUN_004a03f9(uVar5,uVar4,(float)iVar3,(float)iVar3,(float)iVar2);
    FUN_004c4d7a();
    local_c = CONCAT31(local_c._1_3_,2);
    FUN_004652d6();
    FUN_004a10de();
    FUN_00478a0d();
    FUN_0047604f();
    FUN_0047cda7();
    FUN_0047d2ae();
    FUN_0049fea0();
    local_c = 0xffffffff;
    FUN_004f7994();
  }
  FUN_004c1e29();
  FUN_0047cda7();
  FUN_0043bc2d();
  FUN_004a1418();
  FUN_004c1e29();
  FUN_0047cda7();
  FUN_0047d353(param_1);
  ExceptionList = local_14;
  return;
}

