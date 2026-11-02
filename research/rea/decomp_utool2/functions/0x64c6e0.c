// rea decompile_all
// name: FUN_0064c6e0
// address: 0x64c6e0
// body: available
// range: 0x64c6e0-0x64c9fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64c9f3 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64c9fa to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064c6e0(void)

{
  char cVar1;
  void *_Memory;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  uint uVar6;
  
  FUN_00653e70();
  uVar2 = *(uint *)(in_ECX + 0xb8);
  if (*(char *)(in_ECX + 0x108) == '\0') {
    *(uint *)(in_ECX + 0xbc) = uVar2;
    uVar2 = *(uint *)(in_ECX + 0xb4);
  }
  else {
    if ((*(byte *)(in_ECX + 0x30) & 2) == 0) {
      uVar2 = uVar2 + 7 >> 3;
    }
    *(uint *)(in_ECX + 0xbc) = uVar2;
    uVar2 = (((byte)(&DAT_00c18760)[*(byte *)(in_ECX + 0x109)] - 1) +
            (*(int *)(in_ECX + 0xb4) - (uint)(byte)(&DAT_00c184e8)[*(byte *)(in_ECX + 0x109)])) /
            (uint)(byte)(&DAT_00c18760)[*(byte *)(in_ECX + 0x109)];
  }
  *(uint *)(in_ECX + 200) = uVar2;
  uVar4 = *(uint *)(in_ECX + 0x30);
  uVar2 = (uint)*(byte *)(in_ECX + 0x10e);
  if (((uVar4 & 4) != 0) && (*(byte *)(in_ECX + 0x10c) < 8)) {
    uVar2 = 8;
  }
  if ((uVar4 & 0x1000) != 0) {
    cVar1 = *(char *)(in_ECX + 0x10b);
    if (cVar1 == '\x03') {
      uVar2 = (uint)(*(short *)(in_ECX + 0x104) != 0) * 8 + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar2 < 8) {
        uVar2 = 8;
      }
      if (*(short *)(in_ECX + 0x104) != 0) {
        uVar2 = uVar2 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(in_ECX + 0x104) != 0)) {
      uVar2 = (uVar2 * 4) / 3;
    }
  }
  if ((uVar4 & 0x200) != 0) {
    if ((uVar4 & 0x1000) == 0) {
      *(uint *)(in_ECX + 0x30) = uVar4 & 0xfffffdff;
    }
    else if (*(byte *)(in_ECX + 0x10c) < 0x10) {
      uVar2 = uVar2 * 2;
    }
  }
  uVar4 = *(uint *)(in_ECX + 0x30);
  uVar6 = uVar2;
  if ((uVar4 & 0x8000) != 0) {
    cVar1 = *(char *)(in_ECX + 0x10b);
    if (cVar1 == '\0') {
      uVar6 = 0x20;
      if (uVar2 < 9) {
        uVar6 = 0x10;
      }
    }
    else if (((cVar1 == '\x02') || (cVar1 == '\x03')) && (uVar6 = 0x40, uVar2 < 0x21)) {
      uVar6 = 0x20;
    }
  }
  uVar2 = uVar6;
  if ((uVar4 & 0x4000) != 0) {
    if (((*(short *)(in_ECX + 0x104) == 0) || ((uVar4 & 0x1000) == 0)) &&
       (((uVar4 & 0x8000) == 0 && (cVar1 = *(char *)(in_ECX + 0x10b), cVar1 != '\x04')))) {
      if (uVar6 < 9) {
        uVar2 = (uint)(cVar1 == '\x06') * 8 + 0x18;
      }
      else {
        uVar2 = 0x30;
        if (cVar1 == '\x06') {
          uVar2 = 0x40;
        }
      }
    }
    else {
      uVar2 = 0x40;
      if (uVar6 < 0x11) {
        uVar2 = 0x20;
      }
    }
  }
  if (((uVar4 & 0x100000) != 0) &&
     (uVar4 = (uint)*(byte *)(in_ECX + 0x25) * (uint)*(byte *)(in_ECX + 0x24),
     uVar4 - uVar2 != 0 && uVar2 <= uVar4)) {
    uVar2 = uVar4;
  }
  *(char *)(in_ECX + 0x112) = (char)uVar2;
  uVar4 = *(int *)(in_ECX + 0xb4) + 7U & 0xfffffff8;
  *(undefined1 *)(in_ECX + 0x113) = 0;
  if (uVar2 < 8) {
    uVar4 = uVar4 * uVar2 + 7 >> 3;
  }
  else {
    uVar4 = (uVar2 >> 3) * uVar4;
  }
  uVar2 = uVar4 + 0x31 + ((int)(uVar2 + 7) >> 3);
  if (*(uint *)(in_ECX + 0x25c) < uVar2) {
    if (*(void **)(in_ECX + 0x224) != (void *)0x0) {
      FID_conflict__free(*(void **)(in_ECX + 0x224));
    }
    if (*(void **)(in_ECX + 0x270) != (void *)0x0) {
      FID_conflict__free(*(void **)(in_ECX + 0x270));
    }
    if (*(char *)(in_ECX + 0x108) == '\0') {
      if ((uVar2 == 0) || (iVar3 = FUN_004c554b(uVar2), iVar3 == 0)) goto LAB_0064c9f1;
    }
    else {
      iVar3 = FUN_00655d70();
    }
    *(int *)(in_ECX + 0x224) = iVar3;
    if ((uVar2 == 0) || (iVar3 = FUN_004c554b(uVar2), iVar3 == 0)) goto LAB_0064c9f1;
    *(int *)(in_ECX + 0x270) = iVar3;
    *(uint *)(in_ECX + 0x25c) = uVar2;
    *(uint *)(in_ECX + 0xd8) = (*(int *)(in_ECX + 0x224) + 0x20U & 0xfffffff0) - 1;
    *(uint *)(in_ECX + 0xd4) = (iVar3 + 0x20U & 0xfffffff0) - 1;
  }
  if (*(int *)(in_ECX + 0xc4) != -1) {
    _memset(*(void **)(in_ECX + 0xd4),0,*(int *)(in_ECX + 0xc4) + 1);
    _Memory = *(void **)(in_ECX + 0x260);
    uVar5 = extraout_ECX;
    if (_Memory != (void *)0x0) {
      *(undefined4 *)(in_ECX + 0x264) = 0;
      *(undefined4 *)(in_ECX + 0x260) = 0;
      FID_conflict__free(_Memory);
      uVar5 = extraout_ECX_00;
    }
    iVar3 = FUN_00650810(uVar5);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x40;
    return;
  }
LAB_0064c9f1:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

