// rea decompile_all
// name: FUN_0057d1f0
// address: 0x57d1f0
// body: available
// range: 0x57d1f0-0x57d448 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057d1f0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int in_EDX;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 **ppuStack_60;
  undefined1 *puStack_5c;
  int **ppiStack_58;
  undefined4 uStack_54;
  undefined4 *puStack_50;
  undefined1 *puStack_4c;
  int **ppiStack_48;
  uint uStack_44;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined1 local_28 [4];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007123f6;
  local_10 = ExceptionList;
  uStack_44 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = (undefined4 *)(in_EDX + 200);
  local_8 = 0;
  ppiStack_48 = local_24;
  puStack_4c = (undefined1 *)0x57d23d;
  local_14 = uStack_44;
  puVar3 = (undefined4 *)FUN_0063bf80();
  ppiStack_48 = (int **)(puVar3 + 2);
  puStack_4c = (undefined1 *)0x57d24a;
  cVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
  puStack_4c = local_1c;
  puStack_50 = (undefined4 *)0x57d258;
  (**(code **)(*local_24[0] + 0x54))();
  local_8 = 0xffffffff;
  puStack_50 = &DAT_00c7ebb0;
  if (cVar2 == '\0') {
    puStack_50 = &DAT_00c7ef80;
  }
  puStack_50 = (undefined4 *)*puStack_50;
  for (iVar4 = DAT_00c8a678; local_2c = puStack_50, iVar4 != in_EDX; iVar4 = *(int *)(iVar4 + 0xc))
  {
    if (iVar4 == 0) goto LAB_0057d2a4;
  }
  puStack_50 = (undefined4 *)local_28;
  uStack_54 = 0x57d2a2;
  puStack_50 = (undefined4 *)FUN_00684210();
  puStack_50 = (undefined4 *)*puStack_50;
LAB_0057d2a4:
  uStack_54 = 0x57d2b0;
  FUN_00684c50();
  puStack_50 = (undefined4 *)0x0;
  iVar4 = *(int *)*in_ECX;
  uStack_54 = *(undefined4 *)(in_EDX + 0x1c);
  ppiStack_58 = (int **)(*(int *)(in_EDX + 0x18) + -2);
  puStack_5c = (undefined1 *)0x0;
  ppuStack_60 = (undefined4 **)0x57d2d2;
  uStack_54 = FUN_00472d90();
  ppiStack_58 = (int **)0x57d2db;
  (**(code **)(iVar4 + 0x54))();
  ppiStack_58 = local_24;
  local_8 = 1;
  puStack_5c = (undefined1 *)0x57d2ee;
  puVar3 = (undefined4 *)FUN_0063bf80();
  ppiStack_58 = (int **)(puVar3 + 2);
  puStack_5c = (undefined1 *)0x57d2fb;
  cVar2 = (**(code **)(*(int *)*puVar3 + 0x14))();
  puStack_5c = local_1c;
  ppuStack_60 = (undefined4 **)0x57d309;
  (**(code **)(*local_24[0] + 0x54))();
  local_8 = 0xffffffff;
  puVar3 = &DAT_00c7ef90;
  if (cVar2 == '\0') {
    puVar3 = &DAT_00c7ef94;
  }
  ppuStack_60 = (undefined4 **)*puVar3;
  uStack_64 = 0x57d32d;
  FUN_00684c50();
  ppuStack_60 = (undefined4 **)&DAT_00740e64;
  uStack_64 = *(undefined4 *)(in_EDX + 4);
  uStack_68 = 0x57d346;
  iVar4 = FUN_0045e080();
  if (iVar4 < 0) {
    ppuStack_60 = (undefined4 **)0x57d38b;
    FUN_0057f4a0();
    ppuStack_60 = &local_30;
    local_8 = 4;
    uStack_64 = 0x57d3a5;
    uVar5 = FUN_00683640();
    local_8 = CONCAT31(local_8._1_3_,5);
  }
  else {
    ppuStack_60 = (undefined4 **)0x57d35d;
    FUN_0057f4a0();
    local_8 = 2;
    ppuStack_60 = &local_30;
    uStack_64 = 0x57d37e;
    uVar5 = FUN_00683640();
    local_8 = CONCAT31(local_8._1_3_,3);
  }
  if (*(char *)(in_ECX + 2) != '\0') {
    *(undefined1 *)(in_ECX + 2) = 0;
    ppuStack_60 = (undefined4 **)0x57d3bc;
    (**(code **)(*(int *)*in_ECX + 0x34))();
  }
  uStack_64 = 0x57d3c4;
  ppuStack_60 = (undefined4 **)uVar5;
  (**(code **)(*(int *)*in_ECX + 0x68))();
  if (local_30 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_30 + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uStack_64 = 1;
      uStack_68 = 0x57d3e3;
      (**(code **)*local_30)();
    }
  }
  local_8 = 0xffffffff;
  if (local_2c != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_2c + 1;
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      uStack_64 = 1;
      uStack_68 = 0x57d404;
      (**(code **)*local_2c)();
    }
  }
  FUN_006e6400(auStack_70);
  FUN_00682290(in_EDX + 4,0x24,10,0x3f800000);
  ExceptionList = local_10;
  uStack_54 = 0x57d445;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

