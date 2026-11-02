// rea decompile_all
// name: FUN_0064edf0
// address: 0x64edf0
// body: available
// range: 0x64edf0-0x64f029 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64f025 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064edf0(int param_1)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  int in_ECX;
  int in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  byte local_10;
  byte local_f;
  byte local_e;
  byte local_d;
  byte local_c;
  byte local_b;
  
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar5 = *(uint *)(in_ECX + 0x28);
  if ((uVar5 & 1) == 0) {
LAB_0064f025:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if (((uVar5 & 4) != 0) || ((bVar4 = *(byte *)(in_ECX + 0x10b), bVar4 == 3 && ((uVar5 & 2) == 0))))
  {
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      FUN_00656080("out of place");
      FUN_006563b0();
      __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
      return;
    }
    goto LAB_0064f025;
  }
  if ((in_EDX == 0) || ((*(byte *)(in_EDX + 8) & 0x20) == 0)) {
    if (bVar4 == 3) {
      iVar2 = 1;
    }
    else {
      iVar2 = (bVar4 & 2 | 1) * 2;
    }
    if (param_1 == iVar2) {
      FUN_00650b50(iVar2);
      iVar2 = FUN_00650a40();
      if (iVar2 != 0) goto LAB_0064ee51;
      if (*(byte *)(in_ECX + 0x10b) != 3) {
        bVar4 = 0;
        if ((*(byte *)(in_ECX + 0x10b) & 2) == 0) {
          sVar3 = (ushort)local_10 * 0x100 + (ushort)local_f;
          uVar6 = CONCAT22(sVar3,sVar3);
          FUN_0064c6b0();
          __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX,bVar4,uVar6,sVar3);
          return;
        }
        uVar5 = CONCAT22((ushort)local_c * 0x100 + (ushort)local_b,
                         (ushort)local_e * 0x100 + (ushort)local_d);
LAB_0064efb8:
        uVar7 = 0;
        FUN_0064c6b0();
        __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc,extraout_EDX_00,bVar4,uVar5,uVar7);
        return;
      }
      bVar4 = local_10;
      if ((in_EDX == 0) || (*(ushort *)(in_EDX + 0x14) == 0)) {
        uVar5 = 0;
        goto LAB_0064efb8;
      }
      if ((ushort)local_10 < *(ushort *)(in_EDX + 0x14)) {
        iVar2 = (uint)local_10 * 3 + *(int *)(in_ECX + 0xf8);
        uVar5 = (uint)CONCAT12(*(undefined1 *)(iVar2 + 2),(ushort)*(byte *)(iVar2 + 1));
        goto LAB_0064efb8;
      }
    }
    else {
      FUN_00650a40();
    }
  }
  else {
    FUN_00650a40();
  }
  FUN_00655fd0();
LAB_0064ee51:
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

