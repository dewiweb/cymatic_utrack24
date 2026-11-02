// rea decompile_all
// name: FUN_00516b80
// address: 0x516b80
// body: available
// range: 0x516b80-0x516c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00516b80(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007094a8;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  if (0 < param_1) {
    do {
      puVar2 = operator_new(8);
      *puVar2 = 0;
      puVar2[1] = &DAT_00bfe12c;
      iVar3 = in_ECX[2];
      iVar4 = iVar3 + 1;
      if (in_ECX[1] < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar3 + 2;
        }
        uVar5 = iVar3 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (in_ECX[1] != uVar5) {
          if ((int)uVar5 < 1) {
            FID_conflict__free((void *)*in_ECX);
            *in_ECX = 0;
          }
          else if (*in_ECX == 0) {
            iVar3 = FUN_004c554b();
            *in_ECX = iVar3;
          }
          else {
            iVar3 = FUN_004c553b(*in_ECX,uVar5 * 4,uVar1);
            *in_ECX = iVar3;
          }
          in_ECX[1] = uVar5;
        }
      }
      param_1 = param_1 + -1;
      iVar3 = in_ECX[2];
      in_ECX[2] = iVar3 + 1;
      *(undefined4 **)(*in_ECX + iVar3 * 4) = puVar2;
    } while (param_1 != 0);
  }
  ExceptionList = local_10;
  return;
}

