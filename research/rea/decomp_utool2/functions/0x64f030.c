// rea decompile_all
// name: FUN_0064f030
// address: 0x64f030
// body: available
// range: 0x64f030-0x64f28c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64f288 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064f030(uint param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  ushort local_1f4;
  undefined1 local_1f0 [476];
  byte local_14;
  byte local_13;
  byte local_12;
  byte local_11;
  byte local_10;
  byte local_f;
  uint local_c;
  
  local_c = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(in_ECX + 0x28);
  if ((uVar2 & 1) != 0) {
    if ((uVar2 & 4) == 0) {
      if ((in_EDX == 0) || ((*(byte *)(in_EDX + 8) & 0x10) == 0)) {
        cVar1 = *(char *)(in_ECX + 0x10b);
        if (cVar1 == '\0') {
          if (param_1 == 2) {
            FUN_00650b50(2);
            *(undefined2 *)(in_ECX + 0x104) = 1;
            *(ushort *)(in_ECX + 0x174) = local_1f4 * 0x100 + (local_1f4 >> 8);
LAB_0064f1f5:
            iVar3 = FUN_00650a40();
            if (iVar3 == 0) {
              FUN_0064b9e0(local_1f0,*(undefined2 *)(in_ECX + 0x104),in_ECX + 0x16c);
              __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
              return;
            }
            *(undefined2 *)(in_ECX + 0x104) = 0;
            __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
            return;
          }
          FUN_00650a40();
        }
        else if (cVar1 == '\x02') {
          if (param_1 == 6) {
            FUN_00650b50(6);
            *(undefined2 *)(in_ECX + 0x104) = 1;
            *(ushort *)(in_ECX + 0x16e) = (ushort)local_14 * 0x100 + (ushort)local_13;
            *(ushort *)(in_ECX + 0x170) = (ushort)local_12 * 0x100 + (ushort)local_11;
            *(ushort *)(in_ECX + 0x172) = (ushort)local_10 * 0x100 + (ushort)local_f;
            goto LAB_0064f1f5;
          }
          FUN_00650a40();
        }
        else if (cVar1 == '\x03') {
          if ((uVar2 & 2) == 0) {
            FUN_00650a40();
          }
          else {
            if (((param_1 <= *(ushort *)(in_ECX + 0xfc)) && (param_1 < 0x101)) && (param_1 != 0)) {
              FUN_00650b50(param_1);
              *(short *)(in_ECX + 0x104) = (short)param_1;
              goto LAB_0064f1f5;
            }
            FUN_00650a40();
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
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00650a40();
    if ((*(uint *)(in_ECX + 0x2c) & 0x100000) != 0) {
      FUN_00656080("out of place");
      FUN_006563b0();
      __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

