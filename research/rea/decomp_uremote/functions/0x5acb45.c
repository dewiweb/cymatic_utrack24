// rea decompile_all
// name: _memcmp
// address: 0x5acb45
// body: available
// range: 0x5acb45-0x5ae144 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _memcmp
   
   Library: Visual Studio 2008 Release */

int __cdecl _memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (_Size == 0) {
    return 0;
  }
  if (_Size == 1) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
LAB_005ae09e:
    if (uVar2 == uVar3) {
      return 0;
    }
    return (uint)(0 < (int)(uVar2 - uVar3)) * 2 + -1;
  }
  if (_Size == 2) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    goto LAB_005ae09e;
  }
  if (_Size == 3) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    goto LAB_005ae09e;
  }
  if (_Size == 4) {
    uVar2 = (uint)*(byte *)_Buf1;
    uVar3 = (uint)*(byte *)_Buf2;
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 1);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 1);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 2);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 2);
    if ((uVar2 != uVar3) &&
       (iVar1 = (uint)(uVar2 != uVar3 && -1 < (int)(uVar2 - uVar3)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    uVar2 = (uint)*(byte *)((int)_Buf1 + 3);
    uVar3 = (uint)*(byte *)((int)_Buf2 + 3);
    goto LAB_005ae09e;
  }
  for (; 0x1f < _Size; _Size = _Size - 0x20) {
    if (*(int *)_Buf1 == *(int *)_Buf2) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)_Buf1;
      uVar2 = (uint)*(byte *)_Buf2;
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 1);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 1);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 2);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 2);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 3) != (uint)*(byte *)((int)_Buf2 + 3)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 3) - (uint)*(byte *)((int)_Buf2 + 3)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 4) == *(int *)((int)_Buf2 + 4)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 4);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 4);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 5);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 5);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 6);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 6);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 7) != (uint)*(byte *)((int)_Buf2 + 7)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 7) - (uint)*(byte *)((int)_Buf2 + 7)))
                * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 8) == *(int *)((int)_Buf2 + 8)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 8);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 8);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 9);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 9);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 10);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xb) != (uint)*(byte *)((int)_Buf2 + 0xb)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xb) -
                                (uint)*(byte *)((int)_Buf2 + 0xb))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0xc) == *(int *)((int)_Buf2 + 0xc)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xc);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xc);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xd);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xd);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0xe);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0xe);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0xf) != (uint)*(byte *)((int)_Buf2 + 0xf)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0xf) -
                                (uint)*(byte *)((int)_Buf2 + 0xf))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x10) == *(int *)((int)_Buf2 + 0x10)) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x10);
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x10);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x11);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x11);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x12);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x12);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x13) != (uint)*(byte *)((int)_Buf2 + 0x13)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x13) -
                                (uint)*(byte *)((int)_Buf2 + 0x13))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x14) == *(int *)((int)_Buf2 + 0x14)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x14);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x14);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x15);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x15);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x16);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x16);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x17) != (uint)*(byte *)((int)_Buf2 + 0x17)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x17) -
                                (uint)*(byte *)((int)_Buf2 + 0x17))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x18) == *(int *)((int)_Buf2 + 0x18)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x18);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x18);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x19);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x19);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1a);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1a);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1b) != (uint)*(byte *)((int)_Buf2 + 0x1b)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1b) -
                                (uint)*(byte *)((int)_Buf2 + 0x1b))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(int *)((int)_Buf1 + 0x1c) == *(int *)((int)_Buf2 + 0x1c)) {
      iVar1 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1c);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1c);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1d);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1d);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + 0x1e);
      uVar2 = (uint)*(byte *)((int)_Buf2 + 0x1e);
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + 0x1f) != (uint)*(byte *)((int)_Buf2 + 0x1f)) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + 0x1f) -
                                (uint)*(byte *)((int)_Buf2 + 0x1f))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    _Buf1 = (void *)((int)_Buf1 + 0x20);
    _Buf2 = (void *)((int)_Buf2 + 0x20);
  }
  switch(_Size) {
  default:
    goto switchD_005ad00c_caseD_0;
  case 1:
    goto switchD_005ad00c_caseD_1;
  case 2:
    goto switchD_005ad00c_caseD_2;
  case 3:
    goto switchD_005ad00c_caseD_3;
  case 4:
    goto switchD_005ad00c_caseD_4;
  case 5:
    goto switchD_005ad00c_caseD_5;
  case 6:
    goto switchD_005ad00c_caseD_6;
  case 7:
    goto switchD_005ad00c_caseD_7;
  case 8:
    goto switchD_005ad00c_caseD_8;
  case 9:
    goto switchD_005ad00c_caseD_9;
  case 10:
    goto switchD_005ad00c_caseD_a;
  case 0xb:
    goto switchD_005ad00c_caseD_b;
  case 0xc:
    goto switchD_005ad00c_caseD_c;
  case 0xd:
    goto switchD_005ad00c_caseD_d;
  case 0xe:
    goto switchD_005ad00c_caseD_e;
  case 0xf:
    goto switchD_005ad00c_caseD_f;
  case 0x10:
    goto switchD_005ad00c_caseD_10;
  case 0x11:
    goto switchD_005ad00c_caseD_11;
  case 0x12:
    goto switchD_005ad00c_caseD_12;
  case 0x13:
    goto switchD_005ad00c_caseD_13;
  case 0x14:
    goto switchD_005ad00c_caseD_14;
  case 0x15:
    goto switchD_005ad00c_caseD_15;
  case 0x16:
    goto switchD_005ad00c_caseD_16;
  case 0x17:
    goto switchD_005ad00c_caseD_17;
  case 0x18:
    goto switchD_005ad00c_caseD_18;
  case 0x1a:
    goto switchD_005ad00c_caseD_1a;
  case 0x1b:
    goto switchD_005ad00c_caseD_1b;
  case 0x1c:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1c)) == *(uint *)((int)_Buf2 + (_Size - 0x1c))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1c)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x19))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x19)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x19)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_18:
    if (*(uint *)((int)_Buf1 + (_Size - 0x18)) == *(uint *)((int)_Buf2 + (_Size - 0x18))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x18)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x15))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x15)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x15)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_14:
    if (*(uint *)((int)_Buf1 + (_Size - 0x14)) == *(uint *)((int)_Buf2 + (_Size - 0x14))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x14)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x11))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x11)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x11)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_10:
    if (*(uint *)((int)_Buf1 + (_Size - 0x10)) == *(uint *)((int)_Buf2 + (_Size - 0x10))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x10)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xd))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xd)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xd)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_c:
    if (*(int *)((int)_Buf1 + (_Size - 0xc)) == *(int *)((int)_Buf2 + (_Size - 0xc))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 9)) != (uint)*(byte *)((int)_Buf2 + (_Size - 9))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 9)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 9)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_8:
    if (*(uint *)((int)_Buf1 + (_Size - 8)) == *(uint *)((int)_Buf2 + (_Size - 8))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 8)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 5)) != (uint)*(byte *)((int)_Buf2 + (_Size - 5))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 5)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 5)))) * 2 + -1;
      }
    }
    if (iVar1 == 0) {
switchD_005ad00c_caseD_4:
      if (*(uint *)((int)_Buf1 + (_Size - 4)) == *(uint *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = 0;
      }
      else {
        uVar3 = *(uint *)((int)_Buf1 + (_Size - 4)) & 0xff;
        uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
        if ((uVar3 == uVar2) ||
           (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
          uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
          uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
          if ((uVar3 == uVar2) ||
             (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
            uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
            uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
            if ((uVar3 == uVar2) ||
               (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 == 0)) {
              iVar1 = 0;
              if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) !=
                  (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
                iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                                        (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
              }
            }
          }
        }
      }
      if (iVar1 == 0) {
switchD_005ad00c_caseD_0:
        iVar1 = 0;
      }
    }
    return iVar1;
  case 0x1d:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1d)) == *(uint *)((int)_Buf2 + (_Size - 0x1d))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1d)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1b));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1a)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  case 0x19:
    if (*(uint *)((int)_Buf1 + (_Size - 0x19)) == *(uint *)((int)_Buf2 + (_Size - 0x19))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x19)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x17));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x16))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x16)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x16)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_15:
    if (*(uint *)((int)_Buf1 + (_Size - 0x15)) == *(uint *)((int)_Buf2 + (_Size - 0x15))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x15)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x13));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x12))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x12)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x12)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_11:
    if (*(uint *)((int)_Buf1 + (_Size - 0x11)) == *(uint *)((int)_Buf2 + (_Size - 0x11))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x11)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xe))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xe)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xe)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_d:
    if (*(uint *)((int)_Buf1 + (_Size - 0xd)) == *(uint *)((int)_Buf2 + (_Size - 0xd))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xd)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xb));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 10)) != (uint)*(byte *)((int)_Buf2 + (_Size - 10)))
      {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_9:
    if (*(int *)((int)_Buf1 + (_Size - 9)) == *(int *)((int)_Buf2 + (_Size - 9))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 7));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 6)) != (uint)*(byte *)((int)_Buf2 + (_Size - 6))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 6)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 6)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_5:
    if (*(uint *)((int)_Buf1 + (_Size - 5)) == *(uint *)((int)_Buf2 + (_Size - 5))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 5)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 2)) != (uint)*(byte *)((int)_Buf2 + (_Size - 2))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 2)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 2)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_1:
    if ((uint)*(byte *)((int)_Buf1 + (_Size - 1)) == (uint)*(byte *)((int)_Buf2 + (_Size - 1))) {
      return 0;
    }
    return (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 1)) -
                           (uint)*(byte *)((int)_Buf2 + (_Size - 1)))) * 2 + -1;
  case 0x1e:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1e)) == *(uint *)((int)_Buf2 + (_Size - 0x1e))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1e)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1c));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1b)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_1a:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1a)) == *(uint *)((int)_Buf2 + (_Size - 0x1a))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1a)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x18));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x18));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x17))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x17)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x17)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_16:
    if (*(uint *)((int)_Buf1 + (_Size - 0x16)) == *(uint *)((int)_Buf2 + (_Size - 0x16))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x16)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x14));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x14));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x13))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x13)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x13)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_12:
    if (*(uint *)((int)_Buf1 + (_Size - 0x12)) == *(uint *)((int)_Buf2 + (_Size - 0x12))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x12)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xf))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xf)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xf)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_e:
    if (*(uint *)((int)_Buf1 + (_Size - 0xe)) == *(uint *)((int)_Buf2 + (_Size - 0xe))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xe)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xc));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xc));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xb))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xb)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xb)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_a:
    if (*(int *)((int)_Buf1 + (_Size - 10)) == *(int *)((int)_Buf2 + (_Size - 10))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 8));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 8));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 7)) != (uint)*(byte *)((int)_Buf2 + (_Size - 7))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 7)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 7)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_6:
    if (*(uint *)((int)_Buf1 + (_Size - 6)) == *(uint *)((int)_Buf2 + (_Size - 6))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 6)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 4));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 4));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 3)) != (uint)*(byte *)((int)_Buf2 + (_Size - 3))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 3)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 3)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_2:
    if (*(short *)((int)_Buf1 + (_Size - 2)) != *(short *)((int)_Buf2 + (_Size - 2))) {
LAB_005adbf2:
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 2));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 2));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      goto switchD_005ad00c_caseD_1;
    }
    goto switchD_005ad00c_caseD_0;
  case 0x1f:
    if (*(int *)((int)_Buf1 + (_Size - 0x1f)) == *(int *)((int)_Buf2 + (_Size - 0x1f))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1f));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1f));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1e));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1e));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1d));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1d));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x1c)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x1c)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_1b:
    if (*(uint *)((int)_Buf1 + (_Size - 0x1b)) == *(uint *)((int)_Buf2 + (_Size - 0x1b))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x1b)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1b));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x1a));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x1a));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x19));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x19));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x18))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x18)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x18)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_17:
    if (*(uint *)((int)_Buf1 + (_Size - 0x17)) == *(uint *)((int)_Buf2 + (_Size - 0x17))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x17)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x17));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x16));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x16));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x15));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x15));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x14))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x14)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x14)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_13:
    if (*(uint *)((int)_Buf1 + (_Size - 0x13)) == *(uint *)((int)_Buf2 + (_Size - 0x13))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0x13)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x13));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x12));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x12));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0x11));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0x11));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) !=
          (uint)*(byte *)((int)_Buf2 + (_Size - 0x10))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0x10)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0x10)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_f:
    if (*(int *)((int)_Buf1 + (_Size - 0xf)) == *(int *)((int)_Buf2 + (_Size - 0xf))) {
      iVar1 = 0;
    }
    else {
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xf));
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xf));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xe));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xe));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 0xd));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xd));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) != (uint)*(byte *)((int)_Buf2 + (_Size - 0xc))
         ) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 0xc)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 0xc)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_b:
    if (*(uint *)((int)_Buf1 + (_Size - 0xb)) == *(uint *)((int)_Buf2 + (_Size - 0xb))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 0xb)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 0xb));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 10));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 10));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 9));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 9));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 8)) != (uint)*(byte *)((int)_Buf2 + (_Size - 8))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 8)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 8)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_7:
    if (*(uint *)((int)_Buf1 + (_Size - 7)) == *(uint *)((int)_Buf2 + (_Size - 7))) {
      iVar1 = 0;
    }
    else {
      uVar3 = *(uint *)((int)_Buf1 + (_Size - 7)) & 0xff;
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 7));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 6));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 6));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 5));
      uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 5));
      if ((uVar3 != uVar2) &&
         (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
        return iVar1;
      }
      iVar1 = 0;
      if ((uint)*(byte *)((int)_Buf1 + (_Size - 4)) != (uint)*(byte *)((int)_Buf2 + (_Size - 4))) {
        iVar1 = (uint)(0 < (int)((uint)*(byte *)((int)_Buf1 + (_Size - 4)) -
                                (uint)*(byte *)((int)_Buf2 + (_Size - 4)))) * 2 + -1;
      }
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_005ad00c_caseD_3:
    uVar3 = (uint)*(byte *)((int)_Buf1 + (_Size - 3));
    uVar2 = (uint)*(byte *)((int)_Buf2 + (_Size - 3));
    if ((uVar3 != uVar2) &&
       (iVar1 = (uint)(uVar3 != uVar2 && -1 < (int)(uVar3 - uVar2)) * 2 + -1, iVar1 != 0)) {
      return iVar1;
    }
    goto LAB_005adbf2;
  }
}

