// rea decompile_all
// name: FUN_0064b9e0
// address: 0x64b9e0
// body: available
// range: 0x64b9e0-0x64bade inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64bada to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b9e0(int param_1,int param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  
  if ((in_ECX != 0) && (in_EDX != 0)) {
    if (param_1 != 0) {
      FUN_00659160(0x2000,0);
      iVar2 = FUN_004c554b(0x100);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
      *(int *)(in_EDX + 0x9c) = iVar2;
      *(int *)(in_ECX + 0x168) = iVar2;
      if (param_2 - 1U < 0x100) {
        FUN_004c2c30(iVar2,param_1,param_2);
      }
    }
    if (param_3 != (undefined8 *)0x0) {
      iVar2 = 1 << (*(byte *)(in_EDX + 0x18) & 0x1f);
      if (((*(char *)(in_EDX + 0x19) == '\0') && (iVar2 < (int)(uint)*(ushort *)(param_3 + 1))) ||
         ((*(char *)(in_EDX + 0x19) == '\x02' &&
          (((iVar2 < (int)(uint)*(ushort *)((int)param_3 + 2) ||
            (iVar2 < (int)(uint)*(ushort *)((int)param_3 + 4))) ||
           (iVar2 < (int)(uint)*(ushort *)((int)param_3 + 6))))))) {
        FUN_006563b0();
      }
      uVar1 = *(undefined2 *)(param_3 + 1);
      *(undefined8 *)(in_EDX + 0xa0) = *param_3;
      *(undefined2 *)(in_EDX + 0xa8) = uVar1;
      if (param_2 == 0) {
        param_2 = 1;
      }
    }
    *(short *)(in_EDX + 0x16) = (short)param_2;
    if (param_2 != 0) {
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x10;
      *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 0x2000;
    }
  }
  return;
}

