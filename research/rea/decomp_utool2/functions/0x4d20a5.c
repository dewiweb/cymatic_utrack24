// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned___int64,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
// address: 0x4d20a5
// body: available
// range: 0x4d20a5-0x4d2355 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004d2264) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   > >(struct __crt_locale_pointers * const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> >,int,bool)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl
__crt_strtox::
parse_integer<unsigned___int64,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
          (__crt_locale_pointers *param_1)

{
  ulonglong uVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  uint extraout_ECX;
  char cVar6;
  undefined4 unaff_EBX;
  int iVar7;
  undefined3 uVar10;
  uint uVar8;
  uint uVar9;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  uint in_stack_00000028;
  char in_stack_0000002c;
  undefined4 uVar15;
  int local_44;
  undefined1 local_40 [8];
  char local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  int local_c;
  char local_8;
  undefined3 uStack_7;
  
  cVar2 = validate();
  uVar12 = in_stack_00000028;
  if (cVar2 != '\0') {
    if ((in_stack_00000028 == 0) ||
       ((1 < (int)in_stack_00000028 && ((int)in_stack_00000028 < 0x25)))) {
      uVar15 = unaff_EBX;
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_44,param_1);
      local_c = 0;
      iVar11 = 0;
      local_34 = in_stack_00000018;
      local_30 = in_stack_0000001c;
      cVar2 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                        ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                          *)&stack0x00000008);
      iVar7 = CONCAT31((int3)((uint)unaff_EBX >> 8),cVar2);
      while( true ) {
        cVar6 = (char)iVar7;
        _local_8 = CONCAT31(uStack_7,cVar6);
        iVar5 = __ischartype_l(cVar2,8,local_40);
        uVar10 = (undefined3)((uint)iVar7 >> 8);
        if (iVar5 == 0) break;
        cVar2 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                            *)&stack0x00000008);
        iVar7 = CONCAT31(uVar10,cVar2);
      }
      local_10 = (uint)(in_stack_0000002c != '\0');
      if (cVar6 == '-') {
        local_10 = local_10 | 2;
LAB_004d215a:
        cVar2 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                            *)&stack0x00000008);
        iVar7 = CONCAT31(uVar10,cVar2);
        _local_8 = CONCAT31(uStack_7,cVar2);
      }
      else if (cVar6 == '+') goto LAB_004d215a;
      local_14 = -1;
      if ((uVar12 == 0) || (uVar12 == 0x10)) {
        cVar2 = (char)iVar7;
        if ((byte)(cVar2 - 0x30U) < 10) {
          iVar5 = cVar2 + -0x30;
        }
        else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          iVar5 = cVar2 + -0x57;
        }
        else if ((byte)(cVar2 + 0xbfU) < 0x1a) {
          iVar5 = cVar2 + -0x37;
        }
        else {
          iVar5 = -1;
        }
        if (iVar5 == 0) {
          cVar2 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                  get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                       *)&stack0x00000008);
          local_1c = CONCAT31(local_1c._1_3_,cVar2);
          if ((cVar2 == 'x') || (cVar2 == 'X')) {
            if (uVar12 == 0) {
              uVar12 = 0x10;
            }
            cVar2 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                    get((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                         *)&stack0x00000008);
            _local_8 = CONCAT31(uStack_7,cVar2);
          }
          else {
            if (uVar12 == 0) {
              uVar12 = 8;
            }
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                      ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                        *)&stack0x00000008,cVar2);
          }
        }
        else if (uVar12 == 0) {
          uVar12 = 10;
        }
      }
      local_28 = (int)uVar12 >> 0x1f;
      local_2c = uVar12;
      uVar13 = __aulldvrm(0xffffffff,0xffffffff,uVar12,local_28);
      uVar8 = local_10;
      cVar2 = local_8;
      local_24 = extraout_ECX;
      local_20 = iVar7;
      while( true ) {
        uVar1 = CONCAT44(iVar11,local_c);
        local_1c = (undefined4)(uVar13 >> 0x20);
        local_18 = (undefined4)uVar13;
        if ((byte)(cVar2 - 0x30U) < 10) {
          local_10 = (int)cVar2 - 0x30;
        }
        else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          local_10 = (int)cVar2 - 0x57;
        }
        else if ((byte)(cVar2 + 0xbfU) < 0x1a) {
          local_10 = (int)cVar2 - 0x37;
        }
        else {
          local_10 = 0xffffffff;
        }
        if ((local_10 == 0xffffffff) || (uVar12 <= local_10)) break;
        uVar9 = uVar8 | 8;
        if ((uVar1 < uVar13) || ((uVar13 == uVar1 && ((local_20 != 0 || (local_10 <= local_24))))))
        {
          lVar14 = __allmul(local_2c,local_28,local_c,iVar11);
          uVar13 = CONCAT44(local_1c,local_18);
          uVar1 = lVar14 + (ulonglong)local_10;
        }
        else {
          uVar9 = uVar8 | 0xc;
        }
        iVar11 = (int)(uVar1 >> 0x20);
        local_c = (int)uVar1;
        local_1c = (undefined4)(uVar13 >> 0x20);
        local_18 = (undefined4)uVar13;
        cVar2 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                          ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>
                            *)&stack0x00000008);
        uVar13 = CONCAT44(local_1c,local_18);
        _local_8 = CONCAT31(uStack_7,cVar2);
        uVar8 = uVar9;
      }
      input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                ((input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *)
                 &stack0x00000008,(char)_local_8);
      iVar7 = local_c;
      if ((uVar8 & 8) == 0) {
        restore_state(local_34,local_30);
        local_14 = 0;
        iVar11 = 0;
      }
      else {
        bVar3 = is_overflow_condition<unsigned___int64>(uVar8,CONCAT44(uVar15,iVar11));
        if (bVar3) {
          piVar4 = __errno();
          *piVar4 = 0x22;
          if ((uVar8 & 1) == 0) {
            iVar11 = -1;
            local_14 = -1;
          }
          else if ((uVar8 & 2) == 0) {
            iVar11 = 0x7fffffff;
          }
          else {
            local_14 = 0;
            iVar11 = -0x80000000;
          }
        }
        else {
          local_14 = iVar7;
          if ((uVar8 & 2) != 0) {
            local_14 = -iVar7;
            iVar11 = -(iVar11 + (uint)(iVar7 != 0));
          }
        }
      }
      if (local_38 != '\0') {
        *(uint *)(local_44 + 0x350) = *(uint *)(local_44 + 0x350) & 0xfffffffd;
      }
      goto LAB_004d233b;
    }
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_004d0d1c();
  }
  local_14 = 0;
  iVar11 = 0;
LAB_004d233b:
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return CONCAT44(iVar11,local_14);
}

