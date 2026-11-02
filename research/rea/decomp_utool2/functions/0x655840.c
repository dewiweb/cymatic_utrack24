// rea decompile_all
// name: FUN_00655840
// address: 0x655840
// body: available
// range: 0x655840-0x655b7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x655b7a to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00655840(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int in_EDX;
  undefined1 local_ec [224];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)local_ec;
  if ((in_ECX == 0) || (in_EDX == 0)) {
LAB_00655b63:
    __security_check_cookie(local_c ^ (uint)local_ec);
    return;
  }
  FUN_00650c60();
LAB_00655880:
  iVar3 = FUN_00650b90();
  iVar1 = *(int *)(in_ECX + 0xd0);
  uVar2 = *(uint *)(in_ECX + 0x28);
  if (iVar1 == 0x49444154) {
    if (((uVar2 & 1) == 0) || ((*(char *)(in_ECX + 0x10b) == '\x03' && ((uVar2 & 2) == 0)))) {
LAB_00655b7a:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    if ((uVar2 & 8) != 0) {
      if ((*(uint *)(in_ECX + 0x2c) & 0x100000) == 0) goto LAB_00655b7a;
      FUN_00656080("Too many IDATs found");
      FUN_006563b0();
    }
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 4;
  }
  else {
    if ((uVar2 & 4) != 0) {
      *(uint *)(in_ECX + 0x28) = uVar2 | 8;
    }
    if (iVar1 == 0x49484452) {
      FUN_00650200(iVar3);
      goto LAB_00655880;
    }
    if (iVar1 == 0x49454e44) {
      if (((byte)*(uint *)(in_ECX + 0x28) & 5) != 5) goto LAB_00655b7a;
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x18;
      FUN_00650a40();
      if (iVar3 != 0) {
        FUN_00655fd0();
      }
      goto LAB_00655880;
    }
  }
  iVar4 = FUN_00659060();
  if (iVar4 == 0) {
    if (iVar1 == 0x504c5445) {
      FUN_00650050(iVar3);
    }
    else {
      if (iVar1 == 0x49444154) {
        *(int *)(in_ECX + 0xf0) = iVar3;
        goto LAB_00655b63;
      }
      if (iVar1 == 0x624b4744) {
        FUN_0064edf0(iVar3);
      }
      else if (iVar1 == 0x6348524d) {
        FUN_0064fba0(iVar3);
      }
      else if (iVar1 == 0x67414d41) {
        FUN_0064fef0(iVar3);
      }
      else if (iVar1 == 0x68495354) {
        FUN_0064ec70(iVar3);
      }
      else if (iVar1 == 0x6f464673) {
        FUN_0064e9c0(iVar3);
      }
      else if (iVar1 == 0x7043414c) {
        FUN_0064e6f0(iVar3);
      }
      else if (iVar1 == 0x7343414c) {
        FUN_0064e4a0(iVar3);
      }
      else if (iVar1 == 0x70485973) {
        FUN_0064eb20(iVar3);
      }
      else if (iVar1 == 0x73424954) {
        FUN_0064fdb0(iVar3);
      }
      else if (iVar1 == 0x73524742) {
        FUN_0064fa70(iVar3);
      }
      else if (iVar1 == 0x69434350) {
        FUN_0064f4f0(iVar3);
      }
      else if (iVar1 == 0x73504c54) {
        FUN_0064f290(iVar3);
      }
      else if (iVar1 == 0x74455874) {
        FUN_0064e1f0(iVar3);
      }
      else if (iVar1 == 0x74494d45) {
        FUN_0064e390(iVar3);
      }
      else if (iVar1 == 0x74524e53) {
        FUN_0064f030(iVar3);
      }
      else if (iVar1 == 0x7a545874) {
        FUN_0064df70(iVar3);
      }
      else if (iVar1 == 0x69545874) {
        FUN_0064dc60(iVar3);
      }
      else {
        FUN_0064d990(iVar3,0);
      }
    }
  }
  else {
    FUN_0064d990(iVar3,iVar4);
    if (iVar1 == 0x504c5445) {
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 2;
    }
    else if (iVar1 == 0x49444154) {
      *(undefined4 *)(in_ECX + 0xf0) = 0;
      __security_check_cookie(local_c ^ (uint)local_ec);
      return;
    }
  }
  goto LAB_00655880;
}

