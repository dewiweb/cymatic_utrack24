// rea decompile_all
// name: __87except
// address: 0x1010ae89
// body: available
// range: 0x1010ae89-0x1010afc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2010 Release */

void __cdecl __87except(int param_1,int *param_2,ushort *param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint local_98;
  uint local_94;
  uint local_90 [12];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_10163564 ^ (uint)&stack0xfffffff0;
  local_98 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_1010af18:
    local_94 = 8;
LAB_1010af22:
    bVar1 = __handle_exc(local_94,(double *)(param_2 + 6),local_98);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
        local_60 = *(undefined8 *)(param_2 + 4);
        local_50 = local_50 & 0xffffffe3 | 3;
      }
      else {
        local_50 = local_50 & 0xfffffffe;
      }
      __raise_exc(local_90,&local_98,local_94,param_1,(uint *)(param_2 + 2),(uint *)(param_2 + 6));
    }
  }
  else {
    if (iVar2 == 2) {
      local_94 = 4;
      goto LAB_1010af22;
    }
    if (iVar2 == 3) {
      local_94 = 0x11;
      goto LAB_1010af22;
    }
    if (iVar2 == 4) {
      local_94 = 0x12;
      goto LAB_1010af22;
    }
    if (iVar2 == 5) goto LAB_1010af18;
    if (iVar2 == 7) {
      *param_2 = 1;
    }
    else if (iVar2 == 8) {
      local_94 = 0x10;
      goto LAB_1010af22;
    }
  }
  __ctrlfp();
  if ((*param_2 != 8) && (DAT_101646d0 == 0)) {
    iVar2 = FUN_1003395a();
    if (iVar2 != 0) goto LAB_1010afb5;
  }
  __set_errno_from_matherr(*param_2);
LAB_1010afb5:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

