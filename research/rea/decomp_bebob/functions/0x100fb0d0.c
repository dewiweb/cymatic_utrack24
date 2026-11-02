// rea decompile_all
// name: wcstoxl
// address: 0x100fb0d0
// body: available
// range: 0x100fb0d0-0x100fb291 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned long __cdecl wcstoxl(wchar_t const *,wchar_t const * *,int,int)
   
   Library: Visual Studio 2010 Release */

ulong __cdecl wcstoxl(wchar_t *param_1,wchar_t **param_2,int param_3,int param_4)

{
  wchar_t _C;
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  ushort uVar8;
  uint local_8;
  
  if (param_2 != (wchar_t **)0x0) {
    *param_2 = param_1;
  }
  if ((param_1 == (wchar_t *)0x0) || ((param_3 != 0 && ((param_3 < 2 || (0x24 < param_3)))))) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_100fe6d4();
    return 0;
  }
  local_8 = 0;
  pwVar7 = param_1;
  do {
    pwVar6 = pwVar7;
    _C = *pwVar6;
    pwVar7 = pwVar6 + 1;
    iVar2 = _iswctype(_C,8);
  } while (iVar2 != 0);
  if (_C == L'-') {
    param_4 = param_4 | 2;
LAB_100fb13f:
    _C = *pwVar7;
    pwVar7 = pwVar6 + 2;
  }
  else if (_C == L'+') goto LAB_100fb13f;
  uVar5 = (uint)(ushort)_C;
  if (param_3 == 0) {
    iVar2 = __wchartodigit(_C);
    if (iVar2 != 0) {
      param_3 = 10;
      goto LAB_100fb19d;
    }
    if ((*pwVar7 != L'x') && (*pwVar7 != L'X')) {
      param_3 = 8;
      goto LAB_100fb19d;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (iVar2 = __wchartodigit(_C), iVar2 == 0)) &&
     ((*pwVar7 == L'x' || (*pwVar7 == L'X')))) {
    uVar5 = (uint)(ushort)pwVar7[1];
    pwVar7 = pwVar7 + 2;
  }
LAB_100fb19d:
  uVar3 = (uint)(0xffffffff / (ulonglong)(uint)param_3);
  do {
    uVar8 = (ushort)uVar5;
    uVar4 = __wchartodigit(uVar8);
    if (uVar4 == 0xffffffff) {
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < (ushort)(uVar8 - 0x61))) {
LAB_100fb1fe:
        pwVar7 = pwVar7 + -1;
        if ((param_4 & 8U) == 0) {
          if (param_2 != (wchar_t **)0x0) {
            pwVar7 = param_1;
          }
          local_8 = 0;
        }
        else if (((param_4 & 4U) != 0) ||
                (((param_4 & 1U) == 0 &&
                 ((((param_4 & 2U) != 0 && (0x80000000 < local_8)) ||
                  (((param_4 & 2U) == 0 && (0x7fffffff < local_8)))))))) {
          piVar1 = __errno();
          *piVar1 = 0x22;
          if ((param_4 & 1U) == 0) {
            local_8 = ((param_4 & 2U) != 0) + 0x7fffffff;
          }
          else {
            local_8 = 0xffffffff;
          }
        }
        if (param_2 != (wchar_t **)0x0) {
          *param_2 = pwVar7;
        }
        if ((param_4 & 2U) != 0) {
          local_8 = -local_8;
        }
        return local_8;
      }
      if ((ushort)(uVar8 - 0x61) < 0x1a) {
        uVar5 = uVar5 - 0x20;
      }
      uVar4 = uVar5 - 0x37;
    }
    if ((uint)param_3 <= uVar4) goto LAB_100fb1fe;
    if ((local_8 < uVar3) ||
       ((local_8 == uVar3 && (uVar4 <= (uint)(0xffffffff % (ulonglong)(uint)param_3))))) {
      local_8 = local_8 * param_3 + uVar4;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
      if (param_2 == (wchar_t **)0x0) goto LAB_100fb1fe;
    }
    uVar5 = (uint)(ushort)*pwVar7;
    pwVar7 = pwVar7 + 1;
  } while( true );
}

