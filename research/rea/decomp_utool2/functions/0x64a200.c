// rea decompile_all
// name: FUN_0064a200
// address: 0x64a200
// body: available
// range: 0x64a200-0x64a4b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64a4ad to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64a4b4 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064a200(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int in_ECX;
  uint uVar6;
  undefined4 in_EDX;
  
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_ECX != 0) {
    if ((*(int *)(in_ECX + 0xcc) == 0) && (*(char *)(in_ECX + 0x109) == '\0')) {
      if ((*(uint *)(in_ECX + 0x28) & 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      FUN_00647160();
    }
    cVar1 = *(char *)(in_ECX + 0x108);
    if ((cVar1 != '\0') && ((*(byte *)(in_ECX + 0x30) & 2) != 0)) {
      switch(*(undefined1 *)(in_ECX + 0x109)) {
      case 0:
        if ((*(byte *)(in_ECX + 0xcc) & 7) != 0) {
          FUN_00647010();
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
        break;
      case 1:
        if (((*(byte *)(in_ECX + 0xcc) & 7) != 0) || (*(uint *)(in_ECX + 0xb4) < 5)) {
          FUN_00647010();
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
        break;
      case 2:
        if (((byte)*(undefined4 *)(in_ECX + 0xcc) & 7) != 4) {
          FUN_00647010();
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
        break;
      case 3:
        if (((*(byte *)(in_ECX + 0xcc) & 3) != 0) || (*(uint *)(in_ECX + 0xb4) < 3)) {
          FUN_00647010();
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
        break;
      case 4:
        if (((byte)*(undefined4 *)(in_ECX + 0xcc) & 3) != 2) {
          FUN_00647010();
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
        break;
      case 5:
        if (((*(byte *)(in_ECX + 0xcc) & 1) != 0) || (*(uint *)(in_ECX + 0xb4) < 2)) {
LAB_0064a348:
          FUN_00647010();
          __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
          return;
        }
        break;
      case 6:
        if ((*(byte *)(in_ECX + 0xcc) & 1) == 0) goto LAB_0064a348;
      }
    }
    cVar2 = *(char *)(in_ECX + 0x10b);
    iVar3 = *(int *)(in_ECX + 0xc0);
    bVar5 = *(char *)(in_ECX + 0x10d) * *(char *)(in_ECX + 0x110);
    if (bVar5 < 8) {
      uVar6 = (uint)bVar5 * iVar3 + 7 >> 3;
    }
    else {
      uVar6 = (uint)(bVar5 >> 3) * iVar3;
    }
    FUN_004c2c30(*(int *)(in_ECX + 0xd8) + 1,in_EDX,uVar6);
    if ((((cVar1 == '\0') || (5 < *(byte *)(in_ECX + 0x109))) ||
        ((*(byte *)(in_ECX + 0x30) & 2) == 0)) ||
       (FUN_00646db0(*(byte *)(in_ECX + 0x109)), iVar3 != 0)) {
      if (*(int *)(in_ECX + 0x30) != 0) {
        FUN_00649ec0();
      }
      if ((bVar5 != *(byte *)(in_ECX + 0x10e)) || (bVar5 != *(byte *)(in_ECX + 0x113))) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      if (((*(byte *)(in_ECX + 0x21c) & 4) != 0) && (*(char *)(in_ECX + 0x220) == '@')) {
        FUN_006498d0();
      }
      if ((cVar2 == '\x03') && (-1 < *(int *)(in_ECX + 0x100))) {
        FUN_0064af80();
      }
      FUN_00645f70();
      if (*(code **)(in_ECX + 0x17c) != (code *)0x0) {
        (**(code **)(in_ECX + 0x17c))();
        __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else {
      FUN_00647010();
    }
  }
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return;
}

