// rea decompile_all
// name: cvtdate
// address: 0x5b1b70
// body: available
// range: 0x5b1b70-0x5b1d66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _cvtdate
   
   Library: Visual Studio 2008 Release */

int __cdecl
cvtdate(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
       int param_8,int param_9)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  errno_t eVar3;
  int in_ECX;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long local_8;
  
  local_8 = 0;
  if (param_2 == 1) {
    uVar1 = param_3 & 0x80000003;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
    }
    if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
      puVar4 = (&PTR_DAT_00956c94)[in_EAX];
    }
    else {
      puVar4 = *(undefined **)(&DAT_00956cc8 + in_EAX * 4);
    }
    puVar5 = puVar4 + 1;
    iVar2 = (param_4 * 7 -
            (int)(puVar5 + param_3 * 0x16d + -0x63db +
                           ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                           ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7) +
            param_5;
    if ((int)(puVar5 + param_3 * 0x16d + -0x63db +
                       ((int)(param_3 + 299) / 400 - (int)(param_3 - 1) / 100) +
                       ((int)((param_3 - 1) + ((int)(param_3 - 1) >> 0x1f & 3U)) >> 2)) % 7 <=
        param_5) {
      puVar5 = puVar4 + -6;
    }
    puVar5 = puVar5 + iVar2;
    if (param_4 == 5) {
      if (((uVar1 == 0) && ((int)param_3 % 100 != 0)) || ((int)(param_3 + 0x76c) % 400 == 0)) {
        iVar2 = (&DAT_00956c98)[in_EAX];
      }
      else {
        iVar2 = *(int *)(&DAT_00956ccc + in_EAX * 4);
      }
      if (iVar2 < (int)puVar5) {
        puVar5 = puVar5 + -7;
      }
    }
  }
  else {
    uVar1 = param_3 & 0x80000003;
    bVar6 = uVar1 == 0;
    if ((int)uVar1 < 0) {
      bVar6 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (((bVar6) && (iVar2 = (int)param_3 / 100, (int)param_3 % 100 != 0)) ||
       (iVar2 = (int)(param_3 + 0x76c) / 400, (int)(param_3 + 0x76c) % 400 == 0)) {
      puVar5 = (&PTR_DAT_00956c94)[in_EAX];
    }
    else {
      puVar5 = *(undefined **)(&DAT_00956cc8 + in_EAX * 4);
    }
    puVar5 = puVar5 + param_6;
  }
  param_9 = ((in_ECX * 0x3c + param_7) * 0x3c + param_8) * 1000 + param_9;
  if (param_1 == 1) {
    DAT_00955c28 = param_3;
    DAT_00955c2c = puVar5;
    DAT_00955c30 = param_9;
  }
  else {
    DAT_00955c38 = puVar5;
    DAT_00955c3c = param_9;
    eVar3 = __get_dstbias(&local_8);
    if (eVar3 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar2 = local_8 * 1000;
    DAT_00955c3c = DAT_00955c3c + iVar2;
    if (DAT_00955c3c < 0) {
      DAT_00955c3c = DAT_00955c3c + 86400000;
      DAT_00955c38 = DAT_00955c38 + -1;
    }
    else {
      iVar2 = 86400000;
      if (86399999 < DAT_00955c3c) {
        DAT_00955c3c = DAT_00955c3c + -86400000;
        DAT_00955c38 = DAT_00955c38 + 1;
      }
    }
    DAT_00955c34 = param_3;
  }
  return iVar2;
}

