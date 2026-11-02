// rea decompile_all
// name: FUN_00650050
// address: 0x650050
// body: available
// range: 0x650050-0x6501fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6501f2 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x6501f7 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00650050(uint param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  int iVar3;
  undefined1 *puVar4;
  undefined1 local_314;
  undefined1 local_313;
  undefined1 local_312;
  undefined1 local_310 [2];
  undefined1 local_30e [770];
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)(in_ECX + 0x28);
  if ((uVar1 & 1) == 0) {
LAB_006501f2:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((uVar1 & 2) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if ((uVar1 & 4) == 0) {
    *(uint *)(in_ECX + 0x28) = uVar1 | 2;
    if ((*(byte *)(in_ECX + 0x10b) & 2) == 0) {
      FUN_00650a40();
    }
    else if ((param_1 < 0x301) && (param_1 == (param_1 / 3) * 3)) {
      iVar2 = (int)param_1 / 3;
      if (0 < iVar2) {
        iVar3 = iVar2;
        puVar4 = local_30e;
        do {
          FUN_00650b50(3);
          puVar4[-2] = local_314;
          puVar4[-1] = local_313;
          *puVar4 = local_312;
          iVar3 = iVar3 + -1;
          puVar4 = puVar4 + 3;
        } while (iVar3 != 0);
      }
      FUN_00650a40();
      FUN_0064c010(local_310,iVar2);
      if (*(short *)(in_ECX + 0x104) == 0) {
        if (in_EDX == 0) goto LAB_0065009b;
        if ((*(byte *)(in_EDX + 8) & 0x10) != 0) goto LAB_00650188;
      }
      else {
LAB_00650188:
        *(undefined2 *)(in_ECX + 0x104) = 0;
        if (in_EDX != 0) {
          *(undefined2 *)(in_EDX + 0x16) = 0;
        }
        FUN_00655fd0();
      }
      if (in_EDX == 0) goto LAB_0065009b;
      uVar1 = *(uint *)(in_EDX + 8);
      if ((uVar1 & 0x40) != 0) {
        FUN_00655fd0();
      }
      if ((uVar1 & 0x20) == 0) goto LAB_0065009b;
    }
    else {
      FUN_00650a40();
      if (*(char *)(in_ECX + 0x10b) == '\x03') goto LAB_006501f2;
    }
  }
  else {
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0065009b:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

