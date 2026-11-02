// rea decompile_all
// name: __mbsnbcmp_l
// address: 0x5c74a4
// body: available
// range: 0x5c74a4-0x5c760d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __mbsnbcmp_l
   
   Library: Visual Studio 2008 Release */

int __cdecl __mbsnbcmp_l(uchar *_Str1,uchar *_Str2,size_t _MaxCount,_locale_t _Locale)

{
  size_t sVar1;
  uchar *puVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  ushort uVar7;
  byte *pbVar8;
  _LocaleUpdate local_14 [4];
  int local_10;
  int local_c;
  char local_8;
  
  if (_MaxCount == 0) {
    iVar4 = 0;
  }
  else {
    _LocaleUpdate::_LocaleUpdate(local_14,_Locale);
    if (*(int *)(local_10 + 8) == 0) {
      iVar4 = _strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
    }
    else if (_Str1 == (uchar *)0x0) {
      piVar5 = __errno();
      *piVar5 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar4 = 0x7fffffff;
    }
    else {
      if (_Str2 != (uchar *)0x0) {
        do {
          bVar3 = *_Str1;
          uVar7 = (ushort)bVar3;
          sVar1 = _MaxCount - 1;
          puVar2 = _Str1 + 1;
          if ((*(byte *)(bVar3 + 0x1d + local_10) & 4) == 0) {
LAB_005c75b3:
            _Str1 = puVar2;
            uVar6 = (uint)*_Str2;
            pbVar8 = _Str2 + 1;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
              if (sVar1 != 0) {
                sVar1 = _MaxCount - 2;
                if (*pbVar8 != 0) {
                  uVar6 = (uint)CONCAT11(*_Str2,*pbVar8);
                  pbVar8 = _Str2 + 2;
                  goto LAB_005c75e5;
                }
              }
              _MaxCount = sVar1;
              uVar6 = 0;
              sVar1 = _MaxCount;
            }
          }
          else {
            if (sVar1 != 0) {
              if (*puVar2 == '\0') {
                uVar7 = 0;
              }
              else {
                uVar7 = CONCAT11(bVar3,*puVar2);
                puVar2 = _Str1 + 2;
              }
              goto LAB_005c75b3;
            }
            uVar6 = (uint)*_Str2;
            uVar7 = 0;
            pbVar8 = _Str2;
            _Str1 = puVar2;
            if ((*(byte *)(uVar6 + 0x1d + local_10) & 4) != 0) {
LAB_005c7583:
              if (local_8 != '\0') {
                *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
              }
              return 0;
            }
          }
LAB_005c75e5:
          _MaxCount = sVar1;
          if ((ushort)uVar6 != uVar7) {
            iVar4 = (-(uint)((ushort)uVar6 < uVar7) & 2) - 1;
            if (local_8 == '\0') {
              return iVar4;
            }
            *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
            return iVar4;
          }
          if ((uVar7 == 0) || (_Str2 = pbVar8, _MaxCount == 0)) goto LAB_005c7583;
        } while( true );
      }
      piVar5 = __errno();
      *piVar5 = 0x16;
      __invalid_parameter(0,0,0,0,0);
      if (local_8 != '\0') {
        *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      }
      iVar4 = 0x7fffffff;
    }
  }
  return iVar4;
}

