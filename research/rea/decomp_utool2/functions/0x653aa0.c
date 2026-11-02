// rea decompile_all
// name: FUN_00653aa0
// address: 0x653aa0
// body: available
// range: 0x653aa0-0x653e68 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x653e51 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x653e56 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x653e5d to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x653e64 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00653aa0(void)

{
  byte bVar1;
  int iVar2;
  int in_ECX;
  int *in_EDX;
  
  if (*(int *)(in_ECX + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((*(uint *)(in_ECX + 0x2c) & 0x4040) != 0x4000) {
    if ((*(uint *)(in_ECX + 0x30) & 0x1000) != 0) {
      if ((char)in_EDX[2] == '\x03') {
        FUN_00651400(*(undefined4 *)(in_ECX + 0xf8),*(undefined4 *)(in_ECX + 0x168),
                     *(undefined2 *)(in_ECX + 0x104));
      }
      else {
        if ((*(short *)(in_ECX + 0x104) == 0) || ((*(uint *)(in_ECX + 0x30) & 0x2000000) == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = in_ECX + 0x16c;
        }
        FUN_00651000(iVar2);
      }
    }
    if (((*(uint *)(in_ECX + 0x30) & 0x40080) == 0x40000) &&
       (((char)in_EDX[2] == '\x06' || ((char)in_EDX[2] == '\x04')))) {
      FUN_0064b190(0);
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x600000) != 0) {
      iVar2 = FUN_00652c70(*(int *)(in_ECX + 0xd8) + 1);
      if (iVar2 != 0) {
        *(undefined1 *)(in_ECX + 0x214) = 1;
        if ((*(uint *)(in_ECX + 0x30) & 0x600000) == 0x400000) {
          FUN_006563b0();
        }
        if ((*(uint *)(in_ECX + 0x30) & 0x600000) == 0x200000) {
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
      }
    }
    if (((*(uint *)(in_ECX + 0x30) & 0x4000) != 0) && ((*(uint *)(in_ECX + 0x28) & 0x800) == 0)) {
      FUN_00653070();
    }
    if ((*(byte *)(in_ECX + 0x30) & 0x80) != 0) {
      FUN_00651b10();
    }
    if (((*(uint *)(in_ECX + 0x30) & 0x602000) == 0x2000) &&
       (((-1 < (char)*(uint *)(in_ECX + 0x30) ||
         ((*(short *)(in_ECX + 0x104) == 0 && ((*(byte *)(in_ECX + 0x10b) & 4) == 0)))) &&
        (*(char *)(in_ECX + 0x10b) != '\x03')))) {
      FUN_00651710();
    }
    if (((*(uint *)(in_ECX + 0x30) & 0x40080) == 0x40080) &&
       (((char)in_EDX[2] == '\x06' || ((char)in_EDX[2] == '\x04')))) {
      FUN_0064b190(0);
    }
    if (((*(uint *)(in_ECX + 0x30) & 0x800000) != 0) && ((*(byte *)(in_EDX + 2) & 4) != 0)) {
      FUN_00651620();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x4000000) != 0) {
      FUN_00653700();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x400) != 0) {
      FUN_006536a0();
    }
    if ((*(byte *)(in_ECX + 0x30) & 0x40) != 0) {
      FUN_00650e50(*(undefined4 *)(in_ECX + 0x1bc),*(undefined4 *)(in_ECX + 0x1c0));
      if (in_EDX[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x200) != 0) {
      FUN_00650fb0();
    }
    if (((*(uint *)(in_ECX + 0x30) & 0x4000) != 0) && ((*(uint *)(in_ECX + 0x28) & 0x800) != 0)) {
      FUN_00653070();
    }
    if ((*(byte *)(in_ECX + 0x30) & 0x20) != 0) {
      FUN_0064b3c0();
    }
    if ((*(byte *)(in_ECX + 0x30) & 8) != 0) {
      FUN_00653760(in_ECX + 0x161);
    }
    if ((*(byte *)(in_ECX + 0x30) & 4) != 0) {
      FUN_00653980();
    }
    if (((char)in_EDX[2] == '\x03') && (-1 < *(int *)(in_ECX + 0x100))) {
      FUN_0064af80();
    }
    if ((*(byte *)(in_ECX + 0x30) & 1) != 0) {
      FUN_0064b0d0();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x10000) != 0) {
      FUN_0064b330();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x8000) != 0) {
      FUN_00653210(*(undefined2 *)(in_ECX + 0x114),*(undefined4 *)(in_ECX + 0x2c));
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x80000) != 0) {
      FUN_006534d0();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x20000) != 0) {
      FUN_00653570();
    }
    if ((*(byte *)(in_ECX + 0x30) & 0x10) != 0) {
      FUN_0064b390();
    }
    if ((*(uint *)(in_ECX + 0x30) & 0x100000) != 0) {
      if (*(code **)(in_ECX + 0x18) != (code *)0x0) {
        (**(code **)(in_ECX + 0x18))();
      }
      if (*(char *)(in_ECX + 0x24) != '\0') {
        *(char *)((int)in_EDX + 9) = *(char *)(in_ECX + 0x24);
      }
      if (*(char *)(in_ECX + 0x25) != '\0') {
        *(char *)((int)in_EDX + 10) = *(char *)(in_ECX + 0x25);
      }
      bVar1 = *(char *)((int)in_EDX + 10) * *(char *)((int)in_EDX + 9);
      *(byte *)((int)in_EDX + 0xb) = bVar1;
      if (7 < bVar1) {
        in_EDX[1] = (uint)(bVar1 >> 3) * *in_EDX;
        return;
      }
      in_EDX[1] = (uint)bVar1 * *in_EDX + 7 >> 3;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

