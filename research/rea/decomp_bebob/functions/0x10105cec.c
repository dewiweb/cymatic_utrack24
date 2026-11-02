// rea decompile_all
// name: FUN_10105cec
// address: 0x10105cec
// body: available
// range: 0x10105cec-0x10105ee2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10105ee2 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall
FUN_10105cec(void *this,int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  code *pcVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  errno_t eVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar2 = param_3 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar2 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      iVar5 = (&DAT_1016410c)[in_EAX];
    }
    else {
      iVar5 = *(int *)(&DAT_10164140 + in_EAX * 4);
    }
    iVar7 = iVar5 + 1;
    iVar6 = (int)(param_3 * 0x16d + -0x63db +
                 ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2) + iVar7 +
                 ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100)) % 7;
    iVar3 = (param_4 * 7 - iVar6) + param_5;
    if (iVar6 <= param_5) {
      iVar7 = iVar5 + -6;
    }
    iVar7 = iVar7 + iVar3;
    if (param_4 == 5) {
      if (((uVar2 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar3 = (&DAT_10164110)[in_EAX];
      }
      else {
        iVar3 = *(int *)(&DAT_10164144 + in_EAX * 4);
      }
      if (iVar3 < iVar7) {
        iVar7 = iVar7 + -7;
      }
    }
  }
  else {
    uVar2 = param_3 & 0x80000003;
    bVar8 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar8 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar8) && (iVar3 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar3 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      iVar7 = (&DAT_1016410c)[in_EAX];
    }
    else {
      iVar7 = *(int *)(&DAT_10164140 + in_EAX * 4);
    }
    iVar7 = iVar7 + param_6;
  }
  iVar5 = (((int)this * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_101640f8 = param_3;
    DAT_101640fc = iVar7;
    DAT_10164100 = iVar5;
  }
  else {
    DAT_10164108 = iVar7;
    DAT_1016410c = iVar5;
    eVar4 = FID_conflict___get_dstbias(&local_8);
    if (eVar4 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      iVar5 = (*pcVar1)();
      return iVar5;
    }
    iVar3 = local_8 * 1000;
    DAT_1016410c = DAT_1016410c + iVar3;
    DAT_10164104 = param_3;
    if (DAT_1016410c < 0) {
      DAT_1016410c = DAT_1016410c + 86400000;
      DAT_10164108 = DAT_10164108 + -1;
    }
    else {
      iVar3 = 86400000;
      if (86399999 < DAT_1016410c) {
        DAT_1016410c = DAT_1016410c + -86400000;
        DAT_10164108 = DAT_10164108 + 1;
      }
    }
  }
  return iVar3;
}

