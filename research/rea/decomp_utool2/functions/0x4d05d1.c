// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<char>_>
// address: 0x4d05d1
// body: available
// range: 0x4d05d1-0x4d0876 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004d07a6) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::c_string_character_source<char> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<char>,int,bool)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl
__crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<char>_>
          (__crt_locale_pointers *param_1,char *param_2,undefined4 *param_3,uint param_4,
          char param_5)

{
  ulonglong uVar1;
  bool bVar2;
  int *piVar3;
  uint extraout_ECX;
  char cVar4;
  int unaff_EBX;
  undefined3 uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int local_44;
  undefined1 local_40 [8];
  char local_38;
  char *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  char local_10;
  undefined3 uStack_f;
  uint local_c;
  char local_5;
  
  bVar2 = c_string_character_source<char>::validate((c_string_character_source<char> *)&param_2);
  if (bVar2) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      iVar11 = unaff_EBX;
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_44,param_1);
      local_14 = 0;
      local_34 = param_2;
      do {
        cVar4 = *param_2;
        uVar5 = (undefined3)((uint)unaff_EBX >> 8);
        unaff_EBX = CONCAT31(uVar5,cVar4);
        param_2 = param_2 + 1;
        _local_10 = CONCAT31(uStack_f,cVar4);
        local_5 = cVar4;
        iVar6 = __ischartype_l(cVar4,8,local_40);
      } while (iVar6 != 0);
      local_c = (uint)(param_5 != '\0');
      if (cVar4 == '-') {
        local_c = local_c | 2;
LAB_004d067f:
        local_5 = *param_2;
        unaff_EBX = CONCAT31(uVar5,local_5);
        param_2 = param_2 + 1;
        _local_10 = CONCAT31(uStack_f,local_5);
      }
      else if (cVar4 == '+') goto LAB_004d067f;
      if ((param_4 == 0) || (param_4 == 0x10)) {
        cVar4 = (char)unaff_EBX;
        if ((byte)(cVar4 - 0x30U) < 10) {
          iVar6 = cVar4 + -0x30;
        }
        else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          iVar6 = cVar4 + -0x57;
        }
        else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          iVar6 = cVar4 + -0x37;
        }
        else {
          iVar6 = -1;
        }
        if (iVar6 == 0) {
          cVar4 = *param_2;
          local_20 = CONCAT31(local_20._1_3_,cVar4);
          if ((cVar4 == 'x') || (cVar4 == 'X')) {
            if (param_4 == 0) {
              param_4 = 0x10;
            }
            local_5 = param_2[1];
            param_2 = param_2 + 2;
            _local_10 = CONCAT31(uStack_f,local_5);
          }
          else {
            if (param_4 == 0) {
              param_4 = 8;
            }
            param_2 = param_2 + 1;
            c_string_character_source<char>::unget
                      ((c_string_character_source<char> *)&param_2,cVar4);
          }
        }
        else if (param_4 == 0) {
          param_4 = 10;
        }
      }
      pcVar8 = param_2;
      local_2c = (int)param_4 >> 0x1f;
      local_30 = param_4;
      uVar9 = __aulldvrm(0xffffffff,0xffffffff,param_4,local_2c);
      uVar1 = (ulonglong)local_14;
      cVar4 = local_5;
      local_28 = extraout_ECX;
      local_24 = unaff_EBX;
      while( true ) {
        iVar6 = (int)(uVar1 >> 0x20);
        local_14 = (uint)uVar1;
        local_20 = (undefined4)(uVar9 >> 0x20);
        local_1c = (undefined4)uVar9;
        if ((byte)(cVar4 - 0x30U) < 10) {
          local_18 = (int)cVar4 - 0x30;
        }
        else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          local_18 = (int)cVar4 - 0x57;
        }
        else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          local_18 = (int)cVar4 - 0x37;
        }
        else {
          local_18 = 0xffffffff;
        }
        if ((local_18 == 0xffffffff) || (param_4 <= local_18)) break;
        if ((uVar1 < uVar9) || ((uVar9 == uVar1 && ((local_24 != 0 || (local_18 <= local_28)))))) {
          local_c = local_c | 8;
          lVar10 = __allmul(local_30,local_2c,uVar1);
          uVar9 = CONCAT44(local_20,local_1c);
          uVar1 = lVar10 + (ulonglong)local_18;
        }
        else {
          local_c = local_c | 0xc;
        }
        cVar4 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        _local_10 = CONCAT31(uStack_f,cVar4);
        param_2 = pcVar8;
      }
      c_string_character_source<char>::unget
                ((c_string_character_source<char> *)&param_2,(char)_local_10);
      uVar7 = local_14;
      if ((local_c & 8) == 0) {
        param_2 = local_34;
        uVar7 = 0;
        iVar6 = 0;
      }
      else {
        bVar2 = is_overflow_condition<unsigned___int64>(local_c,CONCAT44(iVar11,iVar6));
        if (bVar2) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((local_c & 1) == 0) {
            uVar7 = -1;
            iVar6 = -1;
          }
          else if ((local_c & 2) == 0) {
            uVar7 = -1;
            iVar6 = 0x7fffffff;
          }
          else {
            uVar7 = 0;
            iVar6 = -0x80000000;
          }
        }
        else if ((local_c & 2) != 0) {
          bVar2 = uVar7 != 0;
          uVar7 = -uVar7;
          iVar6 = -(iVar6 + (uint)bVar2);
        }
      }
      if (local_38 != '\0') {
        *(uint *)(local_44 + 0x350) = *(uint *)(local_44 + 0x350) & 0xfffffffd;
      }
      goto LAB_004d060e;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_004d0d1c();
  }
  uVar7 = 0;
  iVar6 = 0;
LAB_004d060e:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return CONCAT44(iVar6,uVar7);
}

