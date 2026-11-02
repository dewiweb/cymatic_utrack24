// rea decompile_all
// name: FUN_004a73d2
// address: 0x4a73d2
// body: available
// range: 0x4a73d2-0x4a7553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004a73d2(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *unaff_EDI;
  undefined4 **ppuStack_7c;
  undefined1 *puStack_78;
  undefined4 **ppuStack_74;
  int *piStack_70;
  uint uStack_6c;
  undefined4 *local_60;
  undefined4 *puStack_5c;
  undefined1 local_48 [16];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9526;
  local_14 = ExceptionList;
  uStack_6c = DAT_00955fd4 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_14;
  if (*unaff_EDI != 0) {
    piStack_70 = (int *)0x4a740e;
    FUN_004feb50();
    if ((char)unaff_EDI[9] == '\0') {
      if (*(char *)((int)unaff_EDI + 0x25) != '\0') {
        piStack_70 = (int *)0x4a74b1;
        FUN_0047888f();
        local_c = 0;
        piStack_70 = (int *)0x4a74c2;
        FUN_0043bc2d();
        piStack_70 = (int *)0x4a74cb;
        FUN_004a91a0();
        piStack_70 = unaff_EDI + 1;
        ppuStack_74 = (undefined4 **)0x4a74d6;
        FUN_0047a42b();
        piStack_70 = (int *)local_48;
        ppuStack_74 = (undefined4 **)0x4a74e2;
        (**(code **)(*(int *)*unaff_EDI + 0x2c))();
        ppuStack_74 = (undefined4 **)0x4a74ed;
        FUN_0043bc2d();
        ppuStack_74 = (undefined4 **)0x4a74f2;
        FUN_004a91a0();
        ppuStack_74 = (undefined4 **)0x4a74fb;
        FUN_00478a0d();
        ppuStack_74 = (undefined4 **)&DAT_0095d798;
        ppuStack_7c = &local_60;
        puStack_78 = local_38;
        (**(code **)(*(int *)*unaff_EDI + 0x18))();
        piStack_70 = (int *)0x4a7516;
        FUN_004a7c57();
        if (puStack_5c != (undefined4 *)0x0) {
          piVar3 = puStack_5c + 1;
          *piVar3 = *piVar3 + -1;
          if (*piVar3 == 0) {
            piStack_70 = (int *)0x1;
            ppuStack_74 = (undefined4 **)0x4a7530;
            (**(code **)*puStack_5c)();
          }
        }
        piStack_70 = (int *)0x4a7539;
        FUN_004f7994();
        goto LAB_004a7539;
      }
      piVar3 = (int *)*unaff_EDI;
      piStack_70 = (int *)0x4a744f;
      FUN_0043bc2d();
      local_60 = &ppuStack_7c;
      FUN_004a9692(unaff_EDI + 1);
    }
    else {
      piVar3 = (int *)*unaff_EDI;
      piStack_70 = (int *)0x4a7422;
      uVar2 = FUN_0043bc2d();
      local_60 = &ppuStack_7c;
      FUN_00475164(&ppuStack_7c,uVar2);
    }
    piStack_70 = (int *)FUN_00500a2f();
    ppuStack_74 = &local_60;
    puStack_78 = (undefined1 *)0x4a747a;
    (**(code **)(*piVar3 + 0x14))();
    piStack_70 = (int *)0x4a7481;
    FUN_004a7c57();
    puVar1 = local_60;
    if (local_60 != (undefined4 *)0x0) {
      piVar3 = local_60 + 1;
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        piStack_70 = (int *)0x1;
        ppuStack_74 = (undefined4 **)0x4a74a3;
        (**(code **)*puVar1)();
      }
    }
  }
LAB_004a7539:
  ExceptionList = local_14;
  return *unaff_EDI != 0;
}

