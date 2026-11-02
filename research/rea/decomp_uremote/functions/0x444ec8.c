// rea decompile_all
// name: FUN_00444ec8
// address: 0x444ec8
// body: available
// range: 0x444ec8-0x445150 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00444ec8(void)

{
  int iVar1;
  int in_ECX;
  undefined1 *puStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *local_40;
  int local_3c [5];
  undefined1 local_28 [4];
  undefined1 *local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x444ed4;
  local_1c = 0;
  local_3c[0] = 0x444ee0;
  iVar1 = FUN_0044bfc5();
  local_14 = (undefined *)(float)*(int *)(iVar1 + 8);
  local_3c[0] = 0x444eee;
  iVar1 = FUN_005b3fb0();
  local_40 = (undefined1 *)0x0;
  puStack_44 = (undefined1 *)0x0;
  uStack_48 = 0x444f01;
  local_3c[0] = iVar1;
  FUN_004c09cc();
  local_18 = *(undefined **)(in_ECX + 0x18);
  local_1c = in_ECX + 600;
  local_40 = (undefined1 *)(*(int *)(in_ECX + 0x564) + *(int *)(in_ECX + 0x55c));
  puStack_44 = (undefined1 *)0x444f2f;
  local_3c[0] = iVar1;
  puStack_44 = (undefined1 *)FUN_005b3fb0();
  uStack_48 = 0x444f3a;
  FUN_004c09cc();
  puStack_44 = *(undefined1 **)(in_ECX + 0x268);
  local_18 = (undefined *)(in_ECX + 0x3d0);
  local_40 = (undefined1 *)(*(int *)(in_ECX + 0x274) + *(int *)(in_ECX + 0x26c));
  uStack_48 = 0x444f5e;
  local_3c[0] = iVar1;
  FUN_004c09cc();
  iVar1 = *(int *)(in_ECX + 0x1c);
  local_3c[0] = 0x444f72;
  local_14 = (undefined *)iVar1;
  local_3c[0] = FUN_005b3fb0();
  if (local_3c[0] < 0x14) {
    local_3c[0] = 0x14;
  }
  local_40 = (undefined1 *)(iVar1 - local_3c[0]);
  puStack_44 = (undefined1 *)0x0;
  uStack_48 = 0x444f8f;
  FUN_004c09cc();
  local_3c[0] = (*(int *)(in_ECX + 0x658) - *(int *)(in_ECX + 0x3ec)) - *(int *)(in_ECX + 0x3e4);
  local_40 = (undefined1 *)(*(int *)(in_ECX + 0x3ec) + *(int *)(in_ECX + 0x3e4));
  puStack_44 = (undefined1 *)0x0;
  uStack_48 = 0x444fb8;
  FUN_004c09cc();
  local_3c[0] = 0x444fbd;
  iVar1 = FUN_0044bfc5();
  if (*(char *)(iVar1 + 0x54) == '\0') {
    local_14 = &DAT_0095d7c0;
  }
  else {
    local_40 = local_20;
    local_3c[0] = 0x3dcccccd;
    puStack_44 = (undefined1 *)0x444fe1;
    local_14 = (undefined *)FUN_0047620f();
  }
  local_24 = (undefined1 *)local_3c;
  puStack_44 = (undefined1 *)local_3c;
  local_40 = (undefined1 *)0x3ecccccd;
  uStack_48 = 0x445003;
  FUN_0044bfc5();
  uStack_48 = 0x445011;
  FUN_004764ae();
  local_8 = 0;
  local_40 = (undefined1 *)0x44501a;
  iVar1 = FUN_0044bfc5();
  local_40 = (undefined1 *)(iVar1 + 0xa4);
  local_24 = (undefined1 *)&local_40;
  puStack_44 = (undefined1 *)0x445029;
  FUN_004d076d();
  local_24 = (undefined1 *)&puStack_44;
  uStack_48 = 0x445039;
  FUN_004d076d();
  local_24 = (undefined1 *)&uStack_48;
  puStack_50 = (undefined1 *)&uStack_48;
  local_4c = 0x3dcccccd;
  FUN_0047620f();
  local_24 = (undefined1 *)&local_4c;
  puStack_50 = (undefined1 *)0x44505f;
  FUN_004d076d();
  local_8 = CONCAT31(local_8._1_3_,4);
  puStack_50 = (undefined1 *)0x445068;
  iVar1 = FUN_0044bfc5();
  puStack_50 = (undefined1 *)(iVar1 + 0xa4);
  local_24 = (undefined1 *)&puStack_50;
  FUN_004d076d();
  local_8 = 0xffffffff;
  FUN_0043f8fb();
  local_3c[0] = 0x445088;
  iVar1 = FUN_0044bfc5();
  if (*(char *)(iVar1 + 0x54) == '\0') {
    local_18 = &DAT_0095d7c0;
  }
  else {
    local_40 = local_28;
    local_3c[0] = 0x3dcccccd;
    puStack_44 = (undefined1 *)0x4450a6;
    local_18 = (undefined *)FUN_0047620f();
  }
  local_24 = (undefined1 *)local_3c;
  puStack_44 = (undefined1 *)local_3c;
  local_40 = (undefined1 *)0x3ecccccd;
  uStack_48 = 0x4450c8;
  FUN_0044bfc5();
  uStack_48 = 0x4450d6;
  FUN_004764ae();
  local_8 = 5;
  local_40 = (undefined1 *)0x4450e2;
  iVar1 = FUN_0044bfc5();
  local_40 = (undefined1 *)(iVar1 + 0xa8);
  local_24 = (undefined1 *)&local_40;
  puStack_44 = (undefined1 *)0x4450f1;
  FUN_004d076d();
  local_24 = (undefined1 *)&puStack_44;
  uStack_48 = 0x445101;
  FUN_004d076d();
  local_24 = (undefined1 *)&uStack_48;
  puStack_50 = (undefined1 *)&uStack_48;
  local_4c = 0x3dcccccd;
  FUN_0047620f();
  local_24 = (undefined1 *)&local_4c;
  puStack_50 = (undefined1 *)0x445127;
  FUN_004d076d();
  local_8 = CONCAT31(local_8._1_3_,9);
  puStack_50 = (undefined1 *)0x445130;
  iVar1 = FUN_0044bfc5();
  puStack_50 = (undefined1 *)(iVar1 + 0xa8);
  local_24 = (undefined1 *)&puStack_50;
  FUN_004d076d();
  local_8 = 0xffffffff;
  FUN_0043f8fb();
  return;
}

