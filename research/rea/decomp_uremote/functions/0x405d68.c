// rea decompile_all
// name: FUN_00405d68
// address: 0x405d68
// body: available
// range: 0x405d68-0x405e59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405d68(int param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  uint _Size;
  undefined4 *unaff_EDI;
  int local_118;
  int local_110;
  undefined1 local_108 [112];
  undefined1 local_98 [144];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_98;
  if (((unaff_EDI == (undefined4 *)0x0) || ((char *)*unaff_EDI == (char *)0x0)) ||
     (*(char *)*unaff_EDI == '\0')) goto LAB_00405e41;
  FUN_00405526(unaff_EDI[0x11022]);
  unaff_EDI[7] = *(undefined4 *)(param_1 + 0xc);
  sVar2 = _strlen((char *)*unaff_EDI);
  _Size = sVar2 + 1;
  if (0xff < _Size) goto LAB_00405e41;
  _memcpy(local_108,(void *)*unaff_EDI,_Size);
  iVar3 = FUN_00405639(local_108,_Size);
  if ((iVar3 == 0) && (local_110 == 0xf)) {
    cVar1 = **(char **)(local_118 + 0x2c);
    if (cVar1 == 'C') {
LAB_00405e2d:
      unaff_EDI[7] = 0x20;
    }
    else if (cVar1 == 'M') {
LAB_00405e24:
      unaff_EDI[7] = 0x10;
    }
    else {
      if (cVar1 != 'P') {
        if (cVar1 == 'c') goto LAB_00405e2d;
        if (cVar1 == 'm') goto LAB_00405e24;
        if (cVar1 != 'p') goto LAB_00405e34;
      }
      unaff_EDI[7] = 8;
    }
  }
LAB_00405e34:
  FUN_0040553b();
LAB_00405e41:
  __security_check_cookie(local_8 ^ (uint)local_98);
  return;
}

