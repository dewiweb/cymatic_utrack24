// rea decompile_all
// name: FUN_0043e9af
// address: 0x43e9af
// body: available
// range: 0x43e9af-0x43ebe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043e9af(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  undefined1 **ppuStack_48;
  undefined1 **ppuStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_2c;
  undefined1 *local_28;
  undefined1 auStack_24 [4];
  undefined1 *puStack_20;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_005e0fba;
  local_14 = ExceptionList;
  uStack_3c = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  iStack_40 = 0x43e9e2;
  iStack_40 = FUN_0044bfc5();
  iStack_40 = iStack_40 + 0x90;
  local_28 = (undefined1 *)&iStack_40;
  ppuStack_44 = (undefined1 **)0x43e9f6;
  FUN_004d076d();
  ppuStack_44 = (undefined1 **)0x43e9fe;
  FUN_0047cda7();
  iStack_40 = 0x43ea03;
  iVar2 = FUN_0044bfc5();
  iVar2 = *(int *)(iVar2 + 0x10);
  ppuStack_44 = *(undefined1 ***)(in_ECX + 0x8c);
  ppuStack_48 = (undefined1 **)((*(int *)(in_ECX + 0x1c) - iVar2) / 2);
  iStack_40 = iVar2;
  FUN_0047d187();
  iVar2 = *(int *)(in_ECX + 0x1c) / 2 + iVar2 / 2;
  iStack_40 = in_ECX + 0x94;
  local_28 = (undefined1 *)(*(int *)(in_ECX + 0x1c) - iVar2);
  ppuStack_44 = (undefined1 **)0x43ea50;
  FUN_0047ceaa();
  ppuStack_44 = *(undefined1 ***)(in_ECX + 0x70);
  ppuStack_48 = (undefined1 **)&stack0xffffffd0;
  uVar3 = FUN_0043ed56();
  puStack_10 = (undefined1 *)0x0;
  ppuStack_44 = (undefined1 **)0x1;
  puStack_20 = (undefined1 *)&ppuStack_48;
  ppuStack_48 = (undefined1 **)0x21;
  FUN_0047d02d(param_1,uVar3,*(undefined4 *)(in_ECX + 0x84),iVar2,*(undefined4 *)(in_ECX + 0x8c),
               uStack_2c);
  puStack_10 = (undefined1 *)0xffffffff;
  ppuStack_44 = (undefined1 **)0x43eaa1;
  FUN_004652d6();
  ppuStack_44 = *(undefined1 ***)(in_ECX + 0x74);
  ppuStack_48 = (undefined1 **)&stack0xffffffd0;
  uVar3 = FUN_0043ed56();
  ppuStack_44 = (undefined1 **)0x1;
  puStack_20 = (undefined1 *)&ppuStack_48;
  puStack_10 = (undefined1 *)0x1;
  ppuStack_48 = (undefined1 **)0x22;
  FUN_0047d02d(param_1,uVar3,*(undefined4 *)(in_ECX + 0x84),iVar2,*(undefined4 *)(in_ECX + 0x8c),
               uStack_2c);
  puStack_10 = (undefined1 *)0xffffffff;
  ppuStack_44 = (undefined1 **)0x43eaee;
  FUN_004652d6();
  ppuStack_44 = *(undefined1 ***)(in_ECX + 0x7c);
  ppuStack_48 = &local_28;
  FUN_0043ed56();
  ppuStack_44 = (undefined1 **)auStack_24;
  puStack_10 = (undefined1 *)0x2;
  ppuStack_48 = (undefined1 **)0x43eb16;
  FUN_0047cef9();
  ppuStack_44 = &local_28;
  puStack_10._0_1_ = 3;
  ppuStack_48 = (undefined1 **)0x43eb25;
  FUN_0049fa7b();
  ppuStack_44 = (undefined1 **)0x43eb2a;
  iVar2 = FUN_005b3fb0();
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
  ppuStack_44 = (undefined1 **)0x43eb3c;
  FUN_004c4d7a();
  cVar1 = *(char *)(in_ECX + 0x90);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(in_ECX + 0xb0) + *(int *)(in_ECX + 0xa8);
  }
  else {
    iVar4 = *(int *)(in_ECX + 0xa8) - iVar2;
  }
  if ((iVar4 < *(int *)(in_ECX + 0x84)) ||
     (*(int *)(in_ECX + 0x8c) + *(int *)(in_ECX + 0x84) < iVar2 + iVar4)) {
    *(bool *)(in_ECX + 0x90) = cVar1 == '\0';
    if (cVar1 == '\0') {
      iVar4 = *(int *)(in_ECX + 0xa8) - iVar2;
    }
    else {
      iVar4 = *(int *)(in_ECX + 0xb0) + *(int *)(in_ECX + 0xa8);
    }
  }
  ppuStack_44 = (undefined1 **)0x1;
  puStack_20 = (undefined1 *)&ppuStack_48;
  ppuStack_48 = (undefined1 **)0x21;
  FUN_0047d02d(param_1,&local_28,iVar4,0,iVar2,uStack_2c);
  ppuStack_44 = (undefined1 **)0x43ebd2;
  FUN_004652d6();
  ExceptionList = pvStack_18;
  return;
}

