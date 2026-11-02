// rea decompile_all
// name: FUN_00532d70
// address: 0x532d70
// body: available
// range: 0x532d70-0x532e65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00532e04) */
/* WARNING: Removing unreachable block (ram,0x00532e08) */
/* WARNING: Removing unreachable block (ram,0x00532e0f) */
/* WARNING: Removing unreachable block (ram,0x00532e22) */
/* WARNING: Removing unreachable block (ram,0x00532e17) */
/* WARNING: Removing unreachable block (ram,0x00532e24) */
/* WARNING: Removing unreachable block (ram,0x00532e06) */
/* WARNING: Removing unreachable block (ram,0x00532e0d) */

void FUN_00532d70(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  bool bVar3;
  undefined1 auStack_3c [4];
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070d0e7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x290)) {
    bVar3 = *(int *)(in_ECX + 0x290) != 0;
    do {
      if (bVar3) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x288) + uVar2 * 4);
      }
      else {
        iVar1 = 0;
      }
      uVar2 = uVar2 + 1;
      *(undefined1 *)(iVar1 + 0x39) = 0;
      bVar3 = uVar2 < *(uint *)(in_ECX + 0x290);
    } while ((int)uVar2 < (int)*(uint *)(in_ECX + 0x290));
  }
  local_8 = 0;
  uStack_34 = param_1;
  uStack_38 = 0x532df4;
  FUN_00532ef0();
  FUN_006e6400(auStack_3c);
  FUN_006ce9f0(1);
  uStack_34 = 0x532e4f;
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

