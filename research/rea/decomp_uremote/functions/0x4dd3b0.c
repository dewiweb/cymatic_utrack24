// rea decompile_all
// name: FUN_004dd3b0
// address: 0x4dd3b0
// body: available
// range: 0x4dd3b0-0x4dd5d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dd3b0(undefined4 param_1,undefined1 **param_2,undefined4 param_3,char param_4,
                 char param_5)

{
  undefined1 *puVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_ECX;
  uint3 uVar7;
  undefined4 uVar8;
  byte bVar9;
  float10 extraout_ST0;
  float10 fVar10;
  undefined8 uVar11;
  undefined1 **ppuStack_64;
  undefined1 *local_60;
  uint uStack_5c;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de033;
  local_14 = ExceptionList;
  uStack_5c = DAT_00955fd4 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_14;
  local_60 = (undefined1 *)0x4dd3e5;
  cVar3 = FUN_004c3153();
  if (cVar3 == '\0') {
    local_44 = (undefined1 *)0x3f000000;
  }
  else {
    local_44 = (undefined1 *)0x3f666666;
  }
  local_60 = (undefined1 *)0x1;
  ppuStack_64 = param_2;
  cVar3 = FUN_004c30fb();
  fVar10 = extraout_ST0;
  if (cVar3 != '\0') {
    fVar10 = (float10)1.3;
  }
  ppuStack_64 = &local_44;
  local_60 = local_44;
  FUN_00476450(param_3,&local_3c,(float)fVar10);
  FUN_00476237();
  if (param_5 == '\0') {
    if (param_4 != '\0') {
      local_60 = (undefined1 *)0x3dcccccd;
      goto LAB_004dd454;
    }
  }
  else {
    local_60 = (undefined1 *)0x3e4ccccd;
LAB_004dd454:
    ppuStack_64 = &local_3c;
    FUN_004765bf();
    local_60 = (undefined1 *)0x4dd479;
    FUN_004d076d();
  }
  puVar1 = param_2[0x2e];
  uVar5 = (uint)puVar1 >> 1;
  local_40 = param_2[7];
  local_3c = (undefined1 *)((float)(int)param_2[6] - 1.0);
  uVar6 = (uint)puVar1 >> 2;
  bVar9 = *(byte *)(param_2 + 0x2e) & 1;
  fVar2 = (float)(int)local_40 - 1.0;
  if ((float)local_3c <= 0.0) {
    ExceptionList = local_14;
    return;
  }
  if (fVar2 <= 0.0) {
    ExceptionList = local_14;
    return;
  }
  local_60 = (undefined1 *)0x4dd4f2;
  uVar11 = FUN_0047888f();
  local_c = 0;
  cVar3 = (char)((ulonglong)uVar11 >> 0x20);
  if ((uVar5 & 1) == 0) {
    local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
    if (cVar3 == '\0') goto LAB_004dd50c;
  }
  local_40 = (undefined1 *)((uint)local_40 & 0xffffff00);
LAB_004dd50c:
  uVar7 = (uint3)((uint)extraout_ECX >> 8);
  if ((bVar9 == 0) && (cVar3 == '\0')) {
    ppuStack_64 = (undefined1 **)CONCAT31(uVar7,1);
  }
  else {
    ppuStack_64 = (undefined1 **)((uint)uVar7 << 8);
  }
  if (((uVar5 & 1) == 0) && ((uVar6 & 1) == 0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  if ((bVar9 == 0) && ((uVar6 & 1) == 0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  local_60 = local_40;
  FUN_0047909d(0x3f000000,0x3f000000,local_3c,fVar2,0x40800000,0x40800000,uVar4,uVar8);
  local_3c = (undefined1 *)&ppuStack_64;
  local_60 = (undefined1 *)fVar2;
  FUN_004d076d();
  FUN_004dd240(local_38);
  local_60 = (undefined1 *)0x4dd5b9;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

