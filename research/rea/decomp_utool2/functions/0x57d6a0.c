// rea decompile_all
// name: FUN_0057d6a0
// address: 0x57d6a0
// body: available
// range: 0x57d6a0-0x57e598 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0057d6a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int **ppiVar7;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071252f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_006d74b0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  *in_ECX = MyLookAndFeel::vftable;
  in_ECX[1] = MyLookAndFeel::vftable;
  in_ECX[2] = MyLookAndFeel::vftable;
  in_ECX[3] = MyLookAndFeel::vftable;
  in_ECX[4] = MyLookAndFeel::vftable;
  in_ECX[5] = MyLookAndFeel::vftable;
  in_ECX[6] = MyLookAndFeel::vftable;
  in_ECX[7] = MyLookAndFeel::vftable;
  in_ECX[8] = MyLookAndFeel::vftable;
  in_ECX[9] = MyLookAndFeel::vftable;
  in_ECX[10] = MyLookAndFeel::vftable;
  in_ECX[0xb] = MyLookAndFeel::vftable;
  in_ECX[0xc] = MyLookAndFeel::vftable;
  in_ECX[0xd] = MyLookAndFeel::vftable;
  in_ECX[0xe] = MyLookAndFeel::vftable;
  in_ECX[0xf] = MyLookAndFeel::vftable;
  in_ECX[0x10] = MyLookAndFeel::vftable;
  in_ECX[0x11] = MyLookAndFeel::vftable;
  in_ECX[0x12] = MyLookAndFeel::vftable;
  in_ECX[0x13] = MyLookAndFeel::vftable;
  in_ECX[0x14] = MyLookAndFeel::vftable;
  in_ECX[0x15] = MyLookAndFeel::vftable;
  in_ECX[0x16] = MyLookAndFeel::vftable;
  in_ECX[0x17] = MyLookAndFeel::vftable;
  in_ECX[0x18] = MyLookAndFeel::vftable;
  in_ECX[0x19] = MyLookAndFeel::vftable;
  in_ECX[0x1a] = MyLookAndFeel::vftable;
  in_ECX[0x1b] = MyLookAndFeel::vftable;
  local_28 = in_ECX + 0x28;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x28] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 1;
  local_28 = in_ECX + 0x29;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x29] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 2;
  local_28 = in_ECX + 0x2a;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x2a] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 3;
  local_28 = in_ECX + 0x2b;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x2b] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 4;
  local_28 = in_ECX + 0x2c;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x2c] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 5;
  local_28 = in_ECX + 0x2d;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x2d] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 6;
  local_28 = in_ECX + 0x2e;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x2e] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 7;
  local_28 = in_ECX + 0x2f;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x2f] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 8;
  local_28 = in_ECX + 0x30;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x30] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 9;
  local_28 = in_ECX + 0x31;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x31] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 10;
  local_28 = in_ECX + 0x32;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x32] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0xb;
  piVar4 = in_ECX + 0x33;
  local_28 = piVar4;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  *piVar4 = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8._0_1_ = 0xc;
  piVar3 = in_ECX + 0x34;
  local_28 = piVar3;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  *piVar3 = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_28 = in_ECX + 0x35;
  local_8._0_1_ = 0xd;
  operator_new(0x28);
  iVar2 = FUN_00468990();
  in_ECX[0x35] = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,0xe);
  DAT_00c8a5d0 = in_ECX;
  operator_new(0x28);
  iVar2 = FUN_00468a40(0);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)*piVar4;
  *piVar4 = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  operator_new(0x28);
  iVar2 = FUN_00468a40(0);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)*piVar3;
  *piVar3 = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  operator_new(0x28);
  iVar2 = FUN_00468a40(0);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)in_ECX[0x35];
  in_ECX[0x35] = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00680930(0x93fc);
  local_8 = CONCAT31(local_8._1_3_,0xf);
  operator_new(0x28);
  iVar2 = FUN_00468c30(&local_14);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)in_ECX[0x28];
  in_ECX[0x28] = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  piVar3 = (int *)FUN_00680930(0x35110);
  piVar4 = (int *)*piVar3;
  *piVar3 = (int)local_14;
  local_14 = piVar4;
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar3 = local_1c + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_1c)(1);
    }
  }
  operator_new(0x28);
  iVar2 = FUN_00468c30(&local_14);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)in_ECX[0x29];
  in_ECX[0x29] = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar1 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00680a80();
  piVar3 = (int *)FUN_00680930(0x36090);
  local_20 = (int *)*piVar3;
  *piVar3 = (int)piVar4;
  local_14 = local_20;
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_1c + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_1c)(1);
    }
  }
  operator_new(0x28);
  iVar2 = FUN_00468c30(&local_14);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)in_ECX[0x2a];
  in_ECX[0x2a] = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00680a80();
  piVar4 = (int *)FUN_00680930(0x33f54);
  local_28 = (int *)*piVar4;
  *piVar4 = (int)local_20;
  local_14 = local_28;
  if (local_1c != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_1c + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_1c)(1);
    }
  }
  operator_new(0x28);
  iVar2 = FUN_00468c30(&local_14);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)in_ECX[0x2b];
  in_ECX[0x2b] = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = puVar1 + 1;
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00680a80();
  piVar3 = (int *)FUN_00680930(0x33fa0);
  piVar4 = (int *)*piVar3;
  *piVar3 = (int)local_28;
  local_14 = piVar4;
  if (local_20 != (int *)0x0) {
    LOCK();
    piVar3 = local_20 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_20)(1);
    }
  }
  operator_new(0x28);
  iVar2 = FUN_00468c30(&local_14);
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  puVar1 = (undefined4 *)in_ECX[0x30];
  in_ECX[0x30] = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = puVar1 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00680a80();
  piVar3 = DAT_00c7ef90;
  piVar6 = in_ECX + 0x1d;
  local_2c = 0x1000400;
  local_28 = DAT_00c7ef90;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef98;
  local_2c = 0x1000401;
  local_28 = DAT_00c7ef98;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ebbc;
  local_2c = 0x1000281;
  local_28 = DAT_00c7ebbc;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef80;
  local_2c = 0x1000283;
  local_28 = DAT_00c7ef80;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef94;
  local_2c = 0x1000284;
  local_28 = DAT_00c7ef94;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef7c;
  local_2c = 0x1000285;
  local_28 = DAT_00c7ef7c;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef94;
  local_2c = 0x1000204;
  local_28 = DAT_00c7ef94;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef94;
  local_2c = 0x1000202;
  local_28 = DAT_00c7ef94;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  FUN_006841a0(&local_28);
  piVar3 = local_28;
  local_24 = 0x1000203;
  local_20 = local_28;
  iVar2 = FUN_004ae580(&local_24);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_24);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c8a948;
  local_2c = 0x1000205;
  local_28 = DAT_00c8a948;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef7c;
  local_2c = 0x1000206;
  local_28 = DAT_00c7ef7c;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c8a948;
  local_2c = 0x1000207;
  local_28 = DAT_00c8a948;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef94;
  local_2c = 0x1000103;
  local_28 = DAT_00c7ef94;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef94;
  local_2c = 0x1000102;
  local_28 = DAT_00c7ef94;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ebbc;
  local_2c = 0x1006501;
  local_28 = DAT_00c7ebbc;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ebb8;
  local_2c = 0x1002800;
  local_28 = DAT_00c7ebb8;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c8a948;
  local_2c = 0x1002810;
  local_28 = DAT_00c8a948;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef90;
  local_2c = 0x1002820;
  local_28 = DAT_00c7ef90;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c8a948;
  local_2c = 0x1005400;
  local_28 = DAT_00c8a948;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c8a948;
  local_2c = 0x1000500;
  local_28 = DAT_00c8a948;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ef7c;
  local_2c = 0x1000501;
  local_28 = DAT_00c7ef7c;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ebb0;
  local_2c = 0x1000502;
  local_28 = DAT_00c7ebb0;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7eba8;
  local_2c = 0x1000503;
  local_28 = DAT_00c7eba8;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7eba8;
  local_2c = 0x1000540;
  local_28 = DAT_00c7eba8;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  piVar3 = DAT_00c7ebbc;
  local_2c = 0x1000541;
  local_28 = DAT_00c7ebbc;
  iVar2 = FUN_004ae580(&local_2c);
  if (iVar2 < 0) {
    FUN_004ae4f0(&local_2c);
  }
  else {
    *(int **)(*piVar6 + 4 + iVar2 * 8) = piVar3;
  }
  FUN_0045c990("colMeterGreen");
  local_8._0_1_ = 0x10;
  uVar5 = FUN_00681fc0(0xde,0x5b);
  FUN_00418ab0(&local_1c,uVar5);
  local_8._0_1_ = 0xf;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("colMeterOrange");
  local_8._0_1_ = 0x11;
  uVar5 = FUN_00681fc0(0x9c,0x25);
  FUN_00418ab0(&local_1c,uVar5);
  local_8._0_1_ = 0xf;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("colMeterRed");
  local_8._0_1_ = 0x12;
  uVar5 = FUN_00681fc0(0,0);
  FUN_00418ab0(&local_1c,uVar5);
  local_8._0_1_ = 0xf;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("colGreyLabel");
  local_8._0_1_ = 0x13;
  uVar5 = FUN_00681fc0(0x98,0x98);
  FUN_00418ab0(&local_1c,uVar5);
  local_8._0_1_ = 0xf;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("colCursorHalo");
  ppiVar7 = &local_28;
  local_8._0_1_ = 0x14;
  FUN_00681fc0(0xff,0xff,ppiVar7);
  uVar5 = FUN_006842b0(ppiVar7);
  FUN_00418ab0(&local_1c,uVar5);
  local_8._0_1_ = 0xf;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("colOrange");
  local_8._0_1_ = 0x15;
  uVar5 = FUN_00681fc0(0x6a,0);
  FUN_00418ab0(&local_1c,uVar5);
  local_8._0_1_ = 0xf;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("colGreyLabel");
  local_8._0_1_ = 0x16;
  uVar5 = FUN_00681fc0(0x98,0x98);
  FUN_00418ab0(&local_1c,uVar5);
  local_8._0_1_ = 0xf;
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990("colTransparent");
  ppiVar7 = &local_28;
  local_8 = CONCAT31(local_8._1_3_,0x17);
  FUN_00681fc0(0,0,ppiVar7);
  uVar5 = FUN_006842b0(ppiVar7);
  FUN_00418ab0(&local_1c,uVar5);
  piVar3 = local_1c + -2;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  DAT_00c8a5c8 = 0x3fe66666;
  _DAT_00c8a5cc = 0x400ccccd;
  if (piVar4 != (int *)0x0) {
    LOCK();
    piVar3 = piVar4 + 1;
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*piVar4)(1);
    }
  }
  ExceptionList = local_10;
  return local_18;
}

