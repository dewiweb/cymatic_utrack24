// rea decompile_all
// name: __setlocale_nolock
// address: 0x5bbb50
// body: available
// range: 0x5bbb50-0x5bbd6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __setlocale_nolock
   
   Library: Visual Studio 2008 Release */

void __setlocale_nolock(int param_1)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  size_t sVar4;
  errno_t eVar5;
  int iVar6;
  char *in_ECX;
  int in_EDX;
  int iVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  int local_98;
  int local_90;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  iVar7 = 0;
  if (param_1 != 0) {
    if (in_ECX != (char *)0x0) {
      __setlocale_set_cat(param_1);
    }
    goto LAB_005bbd5c;
  }
  bVar1 = true;
  local_90 = 0;
  if (in_ECX != (char *)0x0) {
    if (((*in_ECX == 'L') && (in_ECX[1] == 'C')) && (in_ECX[2] == '_')) {
      do {
        pcVar2 = _strpbrk(in_ECX,"=;");
        if (((pcVar2 == (char *)0x0) || (sVar3 = (int)pcVar2 - (int)in_ECX, sVar3 == 0)) ||
           (*pcVar2 == ';')) goto LAB_005bbd5c;
        local_98 = 1;
        ppuVar8 = &PTR_s_LC_COLLATE_005f199c;
        do {
          iVar7 = _strncmp(*ppuVar8,in_ECX,sVar3);
          if ((iVar7 == 0) && (sVar4 = _strlen(*ppuVar8), sVar3 == sVar4)) break;
          local_98 = local_98 + 1;
          ppuVar8 = ppuVar8 + 3;
        } while ((int)ppuVar8 < 0x5f19cd);
        pcVar2 = pcVar2 + 1;
        sVar3 = _strcspn(pcVar2,";");
        if ((sVar3 == 0) && (*pcVar2 != ';')) goto LAB_005bbd5c;
        if (local_98 < 6) {
          eVar5 = _strncpy_s(local_8c,0x83,pcVar2,sVar3);
          if (eVar5 != 0) {
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          local_8c[sVar3] = '\0';
          iVar7 = __setlocale_set_cat(local_98);
          if (iVar7 != 0) {
            local_90 = local_90 + 1;
          }
        }
      } while ((pcVar2[sVar3] != '\0') && (in_ECX = pcVar2 + sVar3 + 1, *in_ECX != '\0'));
    }
    else {
      iVar6 = __expandlocale();
      if (iVar6 == 0) goto LAB_005bbd5c;
      puVar9 = (undefined4 *)(in_EDX + 0x48);
      do {
        if (iVar7 != 0) {
          iVar6 = _strcmp(local_8c,(char *)*puVar9);
          if ((iVar6 == 0) || (iVar6 = __setlocale_set_cat(iVar7), iVar6 != 0)) {
            local_90 = local_90 + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar7 = iVar7 + 1;
        puVar9 = puVar9 + 4;
      } while (iVar7 < 6);
      if (bVar1) goto LAB_005bbd57;
    }
    if (local_90 == 0) goto LAB_005bbd5c;
  }
LAB_005bbd57:
  __setlocale_get_all();
LAB_005bbd5c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

