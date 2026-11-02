// rea decompile_all
// name: FUN_005ed590
// address: 0x5ed590
// body: available
// range: 0x5ed590-0x5ed9a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005ed590(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *in_ECX;
  int local_c;
  
  iVar2 = FUN_00439660(0xe);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_00439660(1);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = FUN_00439660(1);
  if (iVar2 == 0) {
    return false;
  }
  uVar1 = *in_ECX;
  local_c = 0;
  if (uVar1 < 0x801) {
    if (uVar1 != 0x800) {
      if (uVar1 < 0x241) {
        if (((uVar1 != 0x240) && ((uVar1 != 0xc0 && (uVar1 != 0x100)))) && (uVar1 != 0x200))
        goto LAB_005ed6b2;
      }
      else if ((uVar1 != 0x400) && (uVar1 != 0x480)) goto LAB_005ed6b2;
    }
  }
  else if (uVar1 < 0x2001) {
    if ((uVar1 != 0x2000) && (((uVar1 != 0x900 && (uVar1 != 0x1000)) && (uVar1 != 0x1200)))) {
LAB_005ed6b2:
      if (uVar1 < 0x101) {
        local_c = 6;
      }
      else {
        local_c = 7;
      }
    }
  }
  else if ((uVar1 != 0x4000) && (uVar1 != 0x8000)) goto LAB_005ed6b2;
  iVar2 = FUN_00439660(4);
  if (iVar2 == 0) {
    return false;
  }
  uVar1 = in_ECX[1];
  iVar2 = 0;
  if (uVar1 < 0xac45) {
    if (uVar1 == 0xac44) goto LAB_005ed7fc;
    if (uVar1 < 0x5623) {
      if ((uVar1 == 0x5622) || ((uVar1 == 8000 || (uVar1 == 16000)))) goto LAB_005ed7fc;
    }
    else if ((uVar1 == 24000) || (uVar1 == 32000)) goto LAB_005ed7fc;
  }
  else if (uVar1 < 0x17701) {
    if ((uVar1 == 96000) || ((uVar1 == 48000 || (uVar1 == 0x15888)))) goto LAB_005ed7fc;
  }
  else if ((uVar1 == 0x2b110) || (uVar1 == 0x2ee00)) goto LAB_005ed7fc;
  if ((uVar1 < 0x3e419) && (uVar1 % 1000 == 0)) {
    iVar2 = 0xc;
  }
  else if (uVar1 % 10 == 0) {
    iVar2 = 0xe;
  }
  else if (uVar1 < 0x10000) {
    iVar2 = 0xd;
  }
LAB_005ed7fc:
  iVar3 = FUN_00439660(4);
  if (iVar3 != 0) {
    switch(in_ECX[3]) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
    }
    iVar3 = FUN_00439660(4);
    if (iVar3 != 0) {
      switch(in_ECX[4]) {
      case 8:
        break;
      default:
        break;
      case 0xc:
        break;
      case 0x10:
        break;
      case 0x14:
        break;
      case 0x18:
      }
      iVar3 = FUN_00439660(3);
      if ((iVar3 != 0) && (iVar3 = FUN_00439660(1), iVar3 != 0)) {
        if (in_ECX[5] == 0) {
          iVar3 = FUN_005fde00();
        }
        else {
          iVar3 = FUN_005fda20(in_ECX[6],in_ECX[7]);
        }
        if ((iVar3 != 0) &&
           ((local_c == 0 || (iVar3 = FUN_00439660((local_c != 6) * '\b' + '\b'), iVar3 != 0)))) {
          if (iVar2 == 0xc) {
            iVar2 = FUN_00439660(8);
            if (iVar2 == 0) {
              return false;
            }
          }
          else if (iVar2 == 0xd) {
            iVar2 = FUN_00439660(0x10);
            if (iVar2 == 0) {
              return false;
            }
          }
          else if ((iVar2 == 0xe) && (iVar2 = FUN_00439660(0x10), iVar2 == 0)) {
            return false;
          }
          iVar2 = FUN_005fe310();
          if (iVar2 != 0) {
            iVar2 = FUN_00439660(8);
            return iVar2 != 0;
          }
        }
      }
    }
  }
  return false;
}

