// rea decompile_all
// name: FUN_00446bfd
// address: 0x446bfd
// body: available
// range: 0x446bfd-0x446def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00446bfd(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint extraout_ECX;
  undefined1 *puStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined1 *puStack_a0;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined2 *puStack_8c;
  undefined4 uStack_88;
  uint local_84 [9];
  undefined1 *local_60;
  undefined2 local_48;
  undefined2 local_46;
  undefined *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined1 *local_24;
  undefined *local_20;
  undefined *local_1c;
  undefined1 *local_18;
  undefined2 local_14 [6];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x446c09;
  local_84[0] = 0x446c19;
  FUN_00467e6f();
  local_84[0] = 0x446c21;
  local_84[0] = FUN_00467fc4();
  uStack_88 = 0x446c2a;
  local_84[0] = FUN_00465858();
  local_8 = 0;
  local_40 = (undefined1 *)&uStack_88;
  local_44 = &DAT_009114d8;
  puStack_8c = (undefined2 *)0x446c48;
  puStack_8c = (undefined2 *)FUN_00467f9c();
  puStack_90 = (undefined1 *)0x446c51;
  puStack_90 = (undefined1 *)FUN_00465858();
  puStack_94 = (undefined1 *)&puStack_8c;
  local_3c = (undefined1 *)&puStack_8c;
  local_34 = (undefined1 *)&puStack_94;
  local_8._0_1_ = 1;
  local_38 = &DAT_009114d8;
  puStack_98 = (undefined1 *)0x446c73;
  puStack_98 = (undefined1 *)FUN_00467f74();
  puStack_9c = (undefined1 *)0x446c7c;
  puStack_9c = (undefined1 *)FUN_00465858();
  puStack_a0 = (undefined1 *)&puStack_98;
  local_30 = (undefined1 *)&puStack_98;
  local_28 = (undefined1 *)&puStack_a0;
  local_8._0_1_ = 2;
  local_2c = &DAT_009114d8;
  puStack_a4 = (undefined1 *)0x446c9e;
  puStack_a4 = (undefined1 *)FUN_00467f4c();
  puStack_a8 = (undefined1 *)0x446ca7;
  puStack_a8 = (undefined1 *)FUN_00465858();
  puStack_ac = (undefined1 *)&puStack_a4;
  local_24 = (undefined1 *)&puStack_a4;
  local_8._0_1_ = 3;
  local_20 = &DAT_009114d8;
  puStack_b0 = (undefined1 *)0x446cc6;
  puStack_b0 = (undefined1 *)FUN_00467f24();
  puStack_b4 = (undefined1 *)0x446ccf;
  puStack_b4 = (undefined1 *)FUN_00465858();
  local_18 = (undefined1 *)&uStack_b8;
  local_8._0_1_ = 4;
  local_1c = &DAT_009114d8;
  puStack_bc = (undefined1 *)0x446cee;
  iVar1 = FUN_00467ef7();
  puStack_bc = (undefined1 *)(iVar1 + -2000);
  local_60 = (undefined1 *)&puStack_bc;
  FUN_00465858(puStack_bc);
  FUN_00465c6b(local_18);
  puStack_bc = (undefined1 *)&puStack_b0;
  FUN_00465c30();
  uStack_b8 = 0x446d1b;
  puStack_b4 = (undefined1 *)&puStack_ac;
  FUN_00465c6b();
  puStack_b0 = local_24;
  puStack_b4 = (undefined1 *)0x446d24;
  FUN_00465c30();
  puStack_a8 = local_28;
  puStack_ac = (undefined1 *)0x446d2f;
  FUN_00465c6b();
  puStack_a4 = local_30;
  puStack_a8 = (undefined1 *)0x446d38;
  FUN_00465c30();
  puStack_9c = local_34;
  puStack_a0 = (undefined1 *)0x446d43;
  FUN_00465c6b();
  puStack_98 = local_3c;
  puStack_9c = (undefined1 *)0x446d4c;
  FUN_00465c30();
  puStack_90 = local_40;
  puStack_94 = (undefined1 *)0x446d57;
  FUN_00465c6b();
  puStack_8c = local_14;
  puStack_90 = (undefined1 *)0x446d60;
  FUN_00465c30();
  local_84[0] = 0x446d68;
  FUN_004652d6();
  local_84[0] = 0x446d70;
  FUN_004652d6();
  local_84[0] = 0x446d78;
  FUN_004652d6();
  local_84[0] = 0x446d80;
  FUN_004652d6();
  local_8 = CONCAT31(local_8._1_3_,10);
  local_84[0] = 0x446d8c;
  FUN_004652d6();
  local_60 = (undefined1 *)local_84;
  local_84[0] = extraout_ECX & 0xffff0000;
  uStack_88 = 0x446da2;
  puVar2 = (undefined4 *)FUN_004d076d();
  uStack_88 = *puVar2;
  local_48 = 4;
  local_44 = (undefined *)0xb002;
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x14);
  puStack_8c = &local_48;
  puStack_90 = (undefined1 *)0x446dd4;
  local_46 = local_48;
  puStack_90 = (undefined1 *)FUN_00503bc0();
  puStack_94 = (undefined1 *)0x0;
  puStack_98 = (undefined1 *)0x446de0;
  (**(code **)(iVar1 + 0x20))();
  puStack_98 = (undefined1 *)0x446de8;
  FUN_004652d6();
  return;
}

