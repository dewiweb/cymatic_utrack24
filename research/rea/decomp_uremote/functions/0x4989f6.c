// rea decompile_all
// name: FUN_004989f6
// address: 0x4989f6
// body: available
// range: 0x4989f6-0x498cc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x498c7a to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004989f6(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  
  FUN_004923e8();
  uVar2 = *(uint *)(unaff_ESI + 0xb8);
  if (*(char *)(unaff_ESI + 0x108) == '\0') {
    *(uint *)(unaff_ESI + 0xbc) = uVar2;
    uVar2 = *(uint *)(unaff_ESI + 0xb4);
  }
  else {
    if ((*(byte *)(unaff_ESI + 0x30) & 2) == 0) {
      uVar2 = uVar2 + 7 >> 3;
    }
    *(uint *)(unaff_ESI + 0xbc) = uVar2;
    uVar2 = ((*(int *)(unaff_ESI + 0xb4) - (uint)(byte)(&DAT_00919fe8)[*(byte *)(unaff_ESI + 0x109)]
             ) + -1 + (uint)(byte)(&DAT_0091a74c)[*(byte *)(unaff_ESI + 0x109)]) /
            (uint)(byte)(&DAT_0091a74c)[*(byte *)(unaff_ESI + 0x109)];
  }
  uVar5 = *(uint *)(unaff_ESI + 0x30);
  *(uint *)(unaff_ESI + 200) = uVar2;
  uVar2 = (uint)*(byte *)(unaff_ESI + 0x10e);
  if (((uVar5 & 4) != 0) && (*(byte *)(unaff_ESI + 0x10c) < 8)) {
    uVar2 = 8;
  }
  if ((uVar5 & 0x1000) != 0) {
    cVar1 = *(char *)(unaff_ESI + 0x10b);
    if (cVar1 == '\x03') {
      uVar2 = (uint)(*(short *)(unaff_ESI + 0x104) != 0) * 8 + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar2 < 8) {
        uVar2 = 8;
      }
      if (*(short *)(unaff_ESI + 0x104) != 0) {
        uVar2 = uVar2 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(unaff_ESI + 0x104) != 0)) {
      uVar2 = (uVar2 << 2) / 3;
    }
  }
  if ((uVar5 & 0x200) != 0) {
    if ((uVar5 & 0x1000) == 0) {
      *(uint *)(unaff_ESI + 0x30) = uVar5 & 0xfffffdff;
    }
    else if (*(byte *)(unaff_ESI + 0x10c) < 0x10) {
      uVar2 = uVar2 * 2;
    }
  }
  uVar5 = *(uint *)(unaff_ESI + 0x30);
  if ((uVar5 & 0x8000) != 0) {
    cVar1 = *(char *)(unaff_ESI + 0x10b);
    if (cVar1 == '\0') {
      uVar2 = ((8 < uVar2) - 1 & 0xfffffff0) + 0x20;
    }
    else if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
      uVar2 = ((0x20 < uVar2) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if ((uVar5 & 0x4000) != 0) {
    if ((((*(short *)(unaff_ESI + 0x104) == 0) || ((uVar5 & 0x1000) == 0)) &&
        ((uVar5 & 0x8000) == 0)) && (cVar1 = *(char *)(unaff_ESI + 0x10b), cVar1 != '\x04')) {
      if ((int)uVar2 < 9) {
        uVar2 = (uint)(cVar1 == '\x06') * 8 + 0x18;
      }
      else {
        uVar2 = ((cVar1 != '\x06') - 1 & 0x10) + 0x30;
      }
    }
    else {
      uVar2 = ((0x10 < (int)uVar2) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if (((uVar5 & 0x100000) != 0) &&
     (uVar5 = (uint)*(byte *)(unaff_ESI + 0x25) * (uint)*(byte *)(unaff_ESI + 0x24),
     uVar5 - uVar2 != 0 && (int)uVar2 <= (int)uVar5)) {
    uVar2 = uVar5;
  }
  uVar5 = *(int *)(unaff_ESI + 0xb4) + 7U & 0xfffffff8;
  *(char *)(unaff_ESI + 0x112) = (char)uVar2;
  *(undefined1 *)(unaff_ESI + 0x113) = 0;
  if ((int)uVar2 < 8) {
    uVar5 = uVar5 * uVar2 + 7 >> 3;
  }
  else {
    uVar5 = (uVar2 >> 3) * uVar5;
  }
  uVar2 = ((int)(uVar2 + 7) >> 3) + uVar5 + 0x31;
  if (*(uint *)(unaff_ESI + 0x25c) < uVar2) {
    FUN_00491789();
    FUN_00491789();
    if (*(char *)(unaff_ESI + 0x108) == '\0') {
      uVar3 = FUN_0049174b();
    }
    else {
      uVar3 = FUN_00491655();
    }
    *(undefined4 *)(unaff_ESI + 0x224) = uVar3;
    iVar4 = FUN_0049174b();
    uVar5 = *(int *)(unaff_ESI + 0x224) + 0x20;
    *(int *)(unaff_ESI + 0x270) = iVar4;
    *(uint *)(unaff_ESI + 0xd8) = (uVar5 - (uVar5 & 0xf)) + -1;
    *(uint *)(unaff_ESI + 0xd4) = ((iVar4 + 0x20U) - (iVar4 + 0x20U & 0xf)) + -1;
    *(uint *)(unaff_ESI + 0x25c) = uVar2;
  }
  if (*(int *)(unaff_ESI + 0xc4) != -1) {
    _memset(*(void **)(unaff_ESI + 0xd4),0,*(int *)(unaff_ESI + 0xc4) + 1);
    if (*(int *)(unaff_ESI + 0x260) != 0) {
      *(undefined4 *)(unaff_ESI + 0x264) = 0;
      *(int *)(unaff_ESI + 0x260) = 0;
      FUN_00491789();
    }
    iVar4 = FUN_00495bde(0x49444154);
    if (iVar4 == 0) {
      *(uint *)(unaff_ESI + 0x2c) = *(uint *)(unaff_ESI + 0x2c) | 0x40;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00491122();
}

