// rea decompile_all
// name: FUN_004fbf7b
// address: 0x4fbf7b
// body: available
// range: 0x4fbf7b-0x4fc0a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004fbf7b(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  undefined4 uStack_5c;
  undefined4 *puStack_58;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x4fbf87;
  puStack_58 = (undefined4 *)0x68;
  uStack_5c = 0x4fbf90;
  puStack_58 = (undefined4 *)FUN_005af82d();
  local_8 = 0;
  local_18[0] = (int)puStack_58;
  if (puStack_58 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    uStack_5c = 0x4fbfa4;
    iVar1 = FUN_004fbec6();
  }
  local_8 = 0xffffffff;
  if ((int *)*in_ECX != (int *)0x0) {
    puStack_58 = &local_2c;
    uStack_5c = 0x4fbfc1;
    (**(code **)(*(int *)*in_ECX + 0x2c))();
    uStack_5c = 0x4fbfc9;
    FUN_004fba64();
    uStack_5c = 0x4fbfd1;
    piVar2 = (int *)FUN_004fca11();
    uStack_5c = 1;
    local_8 = 1;
    (**(code **)(*piVar2 + 4))(local_18,2,local_24,local_20);
    FUN_0047e2f2();
    FUN_0049f5e8();
    FUN_004c4d7a();
    puStack_58 = (undefined4 *)0x4fc00f;
    FUN_00474d0f();
    local_8 = 0xffffffff;
    puStack_58 = (undefined4 *)0x18;
    uStack_5c = 0x4fc01a;
    iVar3 = FUN_005af82d();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      puStack_58 = (undefined4 *)0x4fc027;
      iVar3 = FUN_004faccc();
    }
    puStack_58 = *(undefined4 **)(iVar1 + 100);
    if ((puStack_58 != (undefined4 *)iVar3) &&
       (*(int *)(iVar1 + 100) = iVar3, puStack_58 != (undefined4 *)0x0)) {
      uStack_5c = 0x4fc03f;
      FUN_005af7b6();
    }
    local_1c = (undefined1 *)&uStack_5c;
    uStack_5c = local_2c;
    puStack_58 = (undefined4 *)local_28;
    uVar4 = FUN_004fcade();
    iVar5 = FUN_004fac90(uVar4);
    iVar3 = in_ECX[0x16];
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar5 + 8);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
    *(undefined4 *)(iVar1 + 0x50) = param_1;
    puStack_58 = (undefined4 *)0x4fc095;
    FUN_004feb50();
    puStack_58 = (undefined4 *)0x4fc09d;
    FUN_004facef();
  }
  return iVar1;
}

