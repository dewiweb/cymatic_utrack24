// rea decompile_all
// name: FUN_0064a4e0
// address: 0x64a4e0
// body: available
// range: 0x64a4e0-0x64a77d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64a779 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064a4e0(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  int in_ECX;
  uint uVar7;
  undefined4 *in_EDX;
  int local_18;
  
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (in_ECX != 0) {
    local_18 = 0;
    do {
      uVar3 = *in_EDX;
      if ((*(int *)(in_ECX + 0xcc) == 0) && (*(char *)(in_ECX + 0x109) == '\0')) {
        if ((*(uint *)(in_ECX + 0x28) & 0x400) == 0) goto LAB_0064a779;
        FUN_00647160();
      }
      cVar1 = *(char *)(in_ECX + 0x108);
      if ((cVar1 == '\0') || ((*(byte *)(in_ECX + 0x30) & 2) == 0)) goto switchD_0064a563_default;
      switch(*(undefined1 *)(in_ECX + 0x109)) {
      case 0:
        if ((*(byte *)(in_ECX + 0xcc) & 7) == 0) break;
        FUN_00647010();
        goto LAB_0064a74d;
      case 1:
        if (((*(byte *)(in_ECX + 0xcc) & 7) != 0) || (*(uint *)(in_ECX + 0xb4) < 5)) {
          FUN_00647010();
          goto LAB_0064a74d;
        }
        break;
      case 2:
        if (((byte)*(undefined4 *)(in_ECX + 0xcc) & 7) != 4) {
          FUN_00647010();
          goto LAB_0064a74d;
        }
        break;
      case 3:
        if (((*(byte *)(in_ECX + 0xcc) & 3) != 0) || (*(uint *)(in_ECX + 0xb4) < 3)) {
          FUN_00647010();
          goto LAB_0064a74d;
        }
        break;
      case 4:
        if (((byte)*(undefined4 *)(in_ECX + 0xcc) & 3) != 2) {
          FUN_00647010();
          goto LAB_0064a74d;
        }
        break;
      case 5:
        if (((*(byte *)(in_ECX + 0xcc) & 1) != 0) || (*(uint *)(in_ECX + 0xb4) < 2)) {
          FUN_00647010();
          goto LAB_0064a74d;
        }
        break;
      case 6:
        if ((*(byte *)(in_ECX + 0xcc) & 1) == 0) {
          FUN_00647010();
          goto LAB_0064a74d;
        }
      }
switchD_0064a563_default:
      cVar2 = *(char *)(in_ECX + 0x10b);
      iVar4 = *(int *)(in_ECX + 0xc0);
      bVar6 = *(char *)(in_ECX + 0x10d) * *(char *)(in_ECX + 0x110);
      if (bVar6 < 8) {
        uVar7 = (uint)bVar6 * iVar4 + 7 >> 3;
      }
      else {
        uVar7 = (uint)(bVar6 >> 3) * iVar4;
      }
      FUN_004c2c30(*(int *)(in_ECX + 0xd8) + 1,uVar3,uVar7);
      if ((((cVar1 == '\0') || (5 < *(byte *)(in_ECX + 0x109))) ||
          ((*(byte *)(in_ECX + 0x30) & 2) == 0)) ||
         (FUN_00646db0(*(byte *)(in_ECX + 0x109)), iVar4 != 0)) {
        if (*(int *)(in_ECX + 0x30) != 0) {
          FUN_00649ec0();
        }
        if ((bVar6 != *(byte *)(in_ECX + 0x10e)) || (bVar6 != *(byte *)(in_ECX + 0x113))) {
LAB_0064a779:
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
        }
      }
      else {
        FUN_00647010();
      }
LAB_0064a74d:
      local_18 = local_18 + 1;
      in_EDX = in_EDX + 1;
    } while (local_18 == 0);
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}

