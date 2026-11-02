// rea decompile_all
// name: FUN_0043d3f6
// address: 0x43d3f6
// body: available
// range: 0x43d3f6-0x43d5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d3f6(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  float *pfVar5;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  uint uStack_3c;
  int iVar6;
  undefined1 auStack_2c [4];
  float fStack_28;
  float fStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e10db;
  local_14 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  iStack_40 = 0x43d429;
  iStack_40 = FUN_0044bfc5();
  iStack_40 = iStack_40 + 0x84;
  local_1c = (undefined1 *)&iStack_40;
  fStack_44 = 6.229115e-39;
  FUN_004d076d();
  fStack_44 = 6.229129e-39;
  FUN_0047d23a();
  iStack_40 = in_ECX + 0xac;
  fStack_44 = 6.229146e-39;
  FUN_0047ceaa();
  iVar6 = 0;
  do {
    fStack_48 = 6.22919e-39;
    fStack_24 = (float)FUN_0043d950();
    fStack_44 = (float)(&DAT_00957818)[iVar6];
    fStack_48 = 6.229212e-39;
    FUN_00465858();
    puStack_10 = (undefined1 *)0x0;
    if (iVar6 == 0) {
      fStack_48 = 1.0;
    }
    else {
      fStack_48 = 0.5;
    }
    puStack_20 = (undefined1 *)&fStack_44;
    pfVar5 = &fStack_44;
    fStack_28 = fStack_48;
    FUN_0044bfc5(&fStack_44);
    FUN_0047620f(pfVar5);
    fStack_48 = 6.229306e-39;
    FUN_0047cda7();
    puStack_20 = *(undefined1 **)(in_ECX + 0x78);
    fStack_28 = (float)(*(int *)(in_ECX + 0x18) - (int)puStack_20);
    fStack_44 = (float)(int)fStack_28;
    fStack_48 = (float)(int)puStack_20;
    FUN_0047d84f(param_1,fStack_24);
    fStack_44 = 6.229376e-39;
    iVar1 = FUN_0044bfc5();
    fStack_44 = (float)(iVar1 + 0xa0);
    puStack_20 = (undefined1 *)&fStack_44;
    fStack_48 = 6.229398e-39;
    FUN_004d076d();
    fStack_48 = 6.229409e-39;
    FUN_0047cda7();
    fStack_24 = (float)(int)fStack_24;
    fStack_44 = 0.0;
    puStack_20 = (undefined1 *)&fStack_48;
    fStack_48 = 4.76441e-44;
    uVar2 = FUN_005b3fb0();
    uVar4 = *(undefined4 *)(in_ECX + 0xb0);
    uVar3 = FUN_005b3fb0(uVar4,uVar2);
    FUN_0047d02d(param_1,auStack_2c,0,uVar3,uVar4,uVar2);
    fStack_44 = 0.0;
    puStack_20 = (undefined1 *)&fStack_48;
    fStack_48 = 4.62428e-44;
    iVar1 = *(int *)(in_ECX + 0x18);
    uVar2 = FUN_005b3fb0();
    uVar4 = *(undefined4 *)(in_ECX + 0xb0);
    uVar3 = FUN_005b3fb0(uVar4,uVar2);
    FUN_0047d02d(param_1,auStack_2c,iVar1 - *(int *)(in_ECX + 0xb0),uVar3,uVar4,uVar2);
    puStack_10 = (undefined1 *)0xffffffff;
    fStack_44 = 6.229629e-39;
    FUN_004652d6();
    iVar6 = iVar6 + 1;
  } while (iVar6 < 6);
  ExceptionList = pvStack_18;
  return;
}

