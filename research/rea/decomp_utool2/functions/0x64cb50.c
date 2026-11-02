// rea decompile_all
// name: FUN_0064cb50
// address: 0x64cb50
// body: available
// range: 0x64cb50-0x64cd58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64cd4a to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64cd4f to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64cd54 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064cb50(int param_1)

{
  int iVar1;
  void *_Memory;
  int in_ECX;
  int in_EDX;
  int iVar2;
  uint uVar3;
  undefined1 local_4e8 [1244];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  if (in_EDX != 0) {
    iVar2 = param_1;
  }
  *(int *)(in_ECX + 0x44) = in_EDX;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  do {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      iVar1 = *(int *)(in_ECX + 0xf0);
      while (iVar1 == 0) {
        FUN_00650a40();
        iVar1 = FUN_00650b90();
        *(int *)(in_ECX + 0xf0) = iVar1;
        if (*(int *)(in_ECX + 0xd0) != 0x49444154) goto LAB_0064cd4a;
      }
      _Memory = *(void **)(in_ECX + 0x260);
      uVar3 = *(uint *)(in_ECX + 0x268);
      if (*(uint *)(in_ECX + 0xf0) < *(uint *)(in_ECX + 0x268)) {
        uVar3 = *(uint *)(in_ECX + 0xf0);
      }
      if (_Memory == (void *)0x0) {
LAB_0064cc0d:
        if (uVar3 == 0) {
          _Memory = (void *)0x0;
        }
        else {
          _Memory = (void *)FUN_004c554b(uVar3);
          if (_Memory != (void *)0x0) {
            *(void **)(in_ECX + 0x260) = _Memory;
            *(uint *)(in_ECX + 0x264) = uVar3;
          }
        }
      }
      else if (*(uint *)(in_ECX + 0x264) < uVar3) {
        *(undefined4 *)(in_ECX + 0x260) = 0;
        *(undefined4 *)(in_ECX + 0x264) = 0;
        FID_conflict__free(_Memory);
        goto LAB_0064cc0d;
      }
      if (*(code **)(in_ECX + 0x10) == (code *)0x0) goto LAB_0064cd4a;
      (**(code **)(in_ECX + 0x10))();
      FUN_006598a0(uVar3);
      *(void **)(in_ECX + 0x38) = _Memory;
      *(int *)(in_ECX + 0xf0) = *(int *)(in_ECX + 0xf0) - uVar3;
      *(uint *)(in_ECX + 0x3c) = uVar3;
    }
    if (in_EDX == 0) {
      *(undefined4 *)(in_ECX + 0x48) = 0x400;
      *(undefined1 **)(in_ECX + 0x44) = local_4e8;
    }
    else {
      iVar1 = -1;
      if (iVar2 != -1) {
        iVar1 = iVar2;
      }
      iVar2 = iVar2 - iVar1;
      *(int *)(in_ECX + 0x48) = iVar1;
    }
    iVar1 = FUN_006161a0();
    iVar2 = iVar2 + *(int *)(in_ECX + 0x48);
    *(undefined4 *)(in_ECX + 0x48) = 0;
    if (iVar1 == 1) {
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 8;
      *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 8;
      *(undefined4 *)(in_ECX + 0x44) = 0;
      if ((*(int *)(in_ECX + 0x3c) != 0) || (*(int *)(in_ECX + 0xf0) != 0)) {
        if ((*(uint *)(in_ECX + 0x2c) & 0x100000) == 0) {
LAB_0064cd4a:
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
        FUN_00656080("Extra compressed data");
        FUN_006563b0();
      }
      if (iVar2 == 0) goto LAB_0064cd37;
      if (in_EDX != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
LAB_0064cd32:
      FUN_00655fd0();
LAB_0064cd37:
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar1 != 0) {
      FUN_00658fd0();
      if (in_EDX != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      goto LAB_0064cd32;
    }
    if (iVar2 == 0) {
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

