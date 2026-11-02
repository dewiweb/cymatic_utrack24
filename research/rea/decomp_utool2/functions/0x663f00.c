// rea decompile_all
// name: FUN_00663f00
// address: 0x663f00
// body: available
// range: 0x663f00-0x6640e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00663f00(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int *in_ECX;
  
  iVar1 = in_ECX[0x60];
  FUN_00664180();
  FUN_006640f0();
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar2 = FUN_00664410();
  *(undefined1 *)(iVar1 + 0x10) = uVar2;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((*(char *)((int)in_ECX + 0x4a) == '\0') || ((char)in_ECX[0x10] == '\0')) {
    *(undefined2 *)(in_ECX + 0x16) = 0;
    *(undefined1 *)((int)in_ECX + 0x5a) = 0;
  }
  if (*(char *)((int)in_ECX + 0x4a) != '\0') {
    if (*(char *)((int)in_ECX + 0x41) != '\0') {
      *(undefined4 *)(*in_ECX + 0x14) = 0x2f;
      (**(code **)*in_ECX)();
    }
    if (in_ECX[0x19] == 3) {
      if (in_ECX[0x1d] == 0) {
        if ((char)in_ECX[0x14] == '\0') {
          *(undefined1 *)(in_ECX + 0x16) = 1;
        }
        else {
          *(undefined1 *)((int)in_ECX + 0x5a) = 1;
        }
      }
      else {
        *(undefined1 *)((int)in_ECX + 0x59) = 1;
      }
    }
    else {
      *(undefined2 *)(in_ECX + 0x16) = 1;
      *(undefined1 *)((int)in_ECX + 0x5a) = 0;
      in_ECX[0x1d] = 0;
    }
    if ((char)in_ECX[0x16] != '\0') {
      FUN_0065bb50();
      *(int *)(iVar1 + 0x14) = in_ECX[0x6a];
    }
    if ((*(char *)((int)in_ECX + 0x5a) != '\0') || (*(char *)((int)in_ECX + 0x59) != '\0')) {
      FUN_0065a5d0();
      *(int *)(iVar1 + 0x18) = in_ECX[0x6a];
    }
  }
  if (*(char *)((int)in_ECX + 0x41) == '\0') {
    if (*(char *)(iVar1 + 0x10) == '\0') {
      FUN_00667ee0();
      FUN_00661f40();
    }
    else {
      FUN_00663770();
    }
    FUN_00662670();
  }
  FUN_00667a20();
  if (*(char *)((int)in_ECX + 0xc9) == '\0') {
    if ((char)in_ECX[0x32] == '\0') {
      FUN_00666df0();
    }
    else {
      FUN_006629e0();
    }
  }
  else {
    *(undefined4 *)(*in_ECX + 0x14) = 1;
    (**(code **)*in_ECX)();
  }
  FUN_00668530();
  if (*(char *)((int)in_ECX + 0x41) == '\0') {
    FUN_00666130();
  }
  (**(code **)(in_ECX[1] + 0x18))();
  (**(code **)(in_ECX[100] + 8))();
  if (((in_ECX[2] != 0) && ((char)in_ECX[0x10] == '\0')) && (*(char *)(in_ECX[100] + 0x10) != '\0'))
  {
    iVar3 = in_ECX[9];
    if ((char)in_ECX[0x32] != '\0') {
      iVar3 = iVar3 * 3 + 2;
    }
    *(undefined4 *)(in_ECX[2] + 4) = 0;
    *(int *)(in_ECX[2] + 8) = in_ECX[0x47] * iVar3;
    *(undefined4 *)(in_ECX[2] + 0xc) = 0;
    *(uint *)(in_ECX[2] + 0x10) = (*(char *)((int)in_ECX + 0x5a) != '\0') + 2;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}

