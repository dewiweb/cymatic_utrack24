// rea decompile_all
// name: FUN_006e5380
// address: 0x6e5380
// body: available
// range: 0x6e5380-0x6e54e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e5380(char param_1,undefined ***param_2)

{
  int *piVar1;
  int iVar2;
  uint3 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  undefined1 auStack_5c [4];
  undefined4 uStack_58;
  char *pcStack_54;
  undefined ***pppuStack_50;
  uint uStack_4c;
  undefined **local_38;
  int *local_34 [2];
  char local_2c [8];
  undefined **local_24 [2];
  char local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_007286d7;
  local_10 = ExceptionList;
  uStack_4c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uStack_4c;
  if (param_1 == (char)in_ECX[0x36]) goto LAB_006e54cc;
  pcStack_54 = (char *)0x6e53c5;
  puVar5 = (undefined4 *)FUN_0040de70();
  if (puVar5 != (undefined4 *)0x0) {
    LOCK();
    puVar5[1] = puVar5[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  if (param_1 == '\0') {
LAB_006e53fa:
    pppuStack_50 = (undefined ***)local_34;
    local_8._0_1_ = 1;
    pcStack_54 = (char *)0x6e540d;
    puVar6 = (undefined4 *)FUN_0063bf80();
    pppuStack_50 = (undefined ***)(puVar6 + 2);
    pcStack_54 = (char *)0x6e541a;
    cVar4 = (**(code **)(*(int *)*puVar6 + 0x14))();
    pcStack_54 = local_2c;
    uStack_58 = 0x6e5428;
    (**(code **)(*local_34[0] + 0x54))();
    uVar3 = local_8._1_3_;
    local_8 = (uint)local_8._1_3_ << 8;
    if (cVar4 != param_1) {
      local_24[0] = &PTR_vftable_00c7ed34;
      local_1c[0] = param_1;
      local_8._0_1_ = 2;
      pppuStack_50 = local_24;
      pcStack_54 = (char *)0x6e544d;
      local_8._1_3_ = uVar3;
      (**(code **)(*(int *)in_ECX[0x32] + 8))();
      local_8 = (uint)local_8._1_3_ << 8;
      pcStack_54 = local_1c;
      uStack_58 = 0x6e545d;
      (**(code **)(*local_24[0] + 0x54))();
      if (puVar5 == (undefined4 *)0x0) goto LAB_006e54cc;
      if (puVar5[2] == 0) goto LAB_006e54b9;
    }
    *(char *)(in_ECX + 0x36) = param_1;
    FUN_006e6400(auStack_5c);
    FUN_006ce9f0(1);
    if (param_2 == (undefined ***)0x0) {
      pppuStack_50 = (undefined ***)0x6e54b5;
      (**(code **)(*in_ECX + 0xc0))();
    }
    else {
      local_38 = DAT_00c8a9c8;
      pppuStack_50 = &local_38;
      pcStack_54 = (char *)0x6e549a;
      FUN_006c8400();
      if (puVar5 == (undefined4 *)0x0) goto LAB_006e54cc;
      if (puVar5[2] == 0) goto LAB_006e54b9;
      pppuStack_50 = (undefined ***)0x6e54ab;
      FUN_006c8360();
    }
    if (puVar5 == (undefined4 *)0x0) goto LAB_006e54cc;
  }
  else {
    pppuStack_50 = param_2;
    pcStack_54 = (char *)0x6e53e7;
    FUN_006c8780();
    if (puVar5 == (undefined4 *)0x0) goto LAB_006e54cc;
    if (puVar5[2] != 0) goto LAB_006e53fa;
  }
LAB_006e54b9:
  LOCK();
  piVar1 = puVar5 + 1;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    pppuStack_50 = (undefined ***)0x1;
    pcStack_54 = (char *)0x6e54cc;
    (**(code **)*puVar5)();
  }
LAB_006e54cc:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

