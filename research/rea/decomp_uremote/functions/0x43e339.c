// rea decompile_all
// name: FUN_0043e339
// address: 0x43e339
// body: available
// range: 0x43e339-0x43e555 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e339(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined1 *puVar7;
  float10 fVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined1 **ppuStack_4c;
  float local_48;
  uint uStack_44;
  undefined1 *puStack_30;
  undefined4 local_2c;
  float local_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined1 *local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005e103b;
  local_14 = ExceptionList;
  uStack_44 = DAT_00955fd4 ^ (uint)&stack0xffffffc0;
  ExceptionList = &local_14;
  local_48 = 6.234562e-39;
  iVar3 = FUN_0044bfc5();
  local_48 = (float)(iVar3 + 0xa0);
  local_1c = (undefined1 *)&local_48;
  ppuStack_4c = (undefined1 **)0x43e380;
  FUN_004d076d();
  ppuStack_4c = (undefined1 **)0x43e38a;
  FUN_0047cda7();
  if (*(int *)(in_ECX + 0x158) == 0) {
    iVar3 = *(int *)(in_ECX + 0x1c) + -0x14;
  }
  else {
    if (*(int *)(in_ECX + 0x158) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(in_ECX + 0x150);
    }
    iVar3 = *(int *)(iVar3 + 0x1c) + *(int *)(iVar3 + 0x14);
  }
  local_28 = (float)(((*(int *)(in_ECX + 0x1c) - iVar3) * 9) / 10);
  local_48 = (float)(int)local_28;
  ppuStack_4c = (undefined1 **)&local_2c;
  uStack_50 = 0x43e3da;
  FUN_0044bfc5();
  uStack_50 = 0x43e3e5;
  local_48 = (float)FUN_0049f81a();
  local_c = 0;
  ppuStack_4c = (undefined1 **)0x43e3f0;
  FUN_0047ceaa();
  puStack_10 = (undefined1 *)0xffffffff;
  ppuStack_4c = (undefined1 **)0x43e3fe;
  FUN_004c4d7a();
  ppuStack_4c = &puStack_30;
  uStack_50 = 0x43e40d;
  FUN_0046537e();
  ppuStack_4c = &puStack_24;
  puStack_10 = (undefined1 *)0x1;
  uStack_50 = 0x43e422;
  FUN_0047cef9();
  ppuStack_4c = &puStack_30;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  uStack_50 = 0x43e431;
  fVar8 = (float10)FUN_0049fa7b();
  local_28 = (float)fVar8;
  ppuStack_4c = (undefined1 **)0x43e43e;
  FUN_004c4d7a();
  puStack_10 = (undefined1 *)0xffffffff;
  ppuStack_4c = (undefined1 **)0x43e44c;
  FUN_004652d6();
  fVar2 = local_28 + 4.0;
  fVar1 = *(float *)(in_ECX + 0x15c);
  puStack_30 = (undefined1 *)0x0;
  do {
    uStack_20 = *(undefined4 *)(in_ECX + 0x110);
    puVar7 = puStack_30 + 1;
    puStack_24 = puStack_30;
    ppuStack_4c = (undefined1 **)0x43e49d;
    uStack_20 = FUN_005b3fb0();
    if ((*(byte *)(in_ECX + 0x94) & 2) != 0) {
      if (fVar1 < fVar2 != (fVar1 == fVar2)) {
        uVar4 = (uint)puStack_30 & 0x80000003;
        if ((int)uVar4 < 0) {
          uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar4 != 3) && (puStack_30 != (undefined1 *)0x0)) goto LAB_0043e534;
      }
      uStack_50 = 0x43e4db;
      ppuStack_4c = (undefined1 **)puVar7;
      FUN_00465858();
      ppuStack_4c = (undefined1 **)0x1;
      puStack_24 = (undefined1 *)&uStack_50;
      puStack_10 = (undefined1 *)0x3;
      uStack_50 = 0x24;
      uVar10 = local_2c;
      uVar5 = FUN_005b3fb0(local_2c);
      iVar9 = iVar3;
      uVar6 = FUN_005b3fb0(iVar3,uVar5);
      FUN_0047d02d(param_1,&local_28,uVar6,iVar9,uVar5,uVar10);
      puStack_10 = (undefined1 *)0xffffffff;
      ppuStack_4c = (undefined1 **)0x43e534;
      FUN_004652d6();
    }
LAB_0043e534:
    puStack_30 = puVar7;
    if (0x17 < (int)puVar7) {
      ExceptionList = pvStack_18;
      return;
    }
  } while( true );
}

