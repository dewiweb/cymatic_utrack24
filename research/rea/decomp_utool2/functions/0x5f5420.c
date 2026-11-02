// rea decompile_all
// name: FUN_005f5420
// address: 0x5f5420
// body: available
// range: 0x5f5420-0x5f5582 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005f5528) */
/* WARNING: Removing unreachable block (ram,0x005f555d) */

undefined4 FUN_005f5420(void)

{
  bool bVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *local_8;
  
  bVar1 = true;
  iVar3 = in_ECX[1];
  if (*(int *)(iVar3 + 0xf0) != 0) {
    uVar2 = *(uint *)(iVar3 + 300);
    if ((((uVar2 != 0) || (*(uint *)(iVar3 + 0x128) != 0)) && (uVar2 <= *(uint *)(iVar3 + 0xec))) &&
       ((*(uint *)(iVar3 + 0xec) != uVar2 || (*(uint *)(iVar3 + 0x128) <= *(uint *)(iVar3 + 0xe8))))
       ) {
      *(undefined4 *)*in_ECX = 4;
      return 1;
    }
  }
  uVar2 = *(uint *)(*(int *)(iVar3 + 0x34) + 0x14) & 7;
  local_8 = in_ECX;
  if (uVar2 != 0) {
    iVar3 = 8 - uVar2;
    if (iVar3 == 0) {
      local_8 = (undefined4 *)0x0;
    }
    else {
      iVar3 = FUN_005feec0(iVar3);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  do {
    iVar3 = in_ECX[1];
    if (*(int *)(iVar3 + 0xdb8) == 0) {
      iVar3 = FUN_005feec0(8);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else {
      local_8 = (undefined4 *)(uint)*(byte *)(iVar3 + 0xdf2);
      *(undefined4 *)(iVar3 + 0xdb8) = 0;
    }
    if (local_8 == (undefined4 *)0xff) {
      *(undefined1 *)(in_ECX[1] + 0xdf0) = 0xff;
      iVar3 = FUN_005feec0(8);
      if (iVar3 == 0) {
        return 0;
      }
      *(undefined1 *)(in_ECX[1] + 0xdf2) = 0xff;
      *(undefined4 *)(in_ECX[1] + 0xdb8) = 1;
    }
    if (bVar1) {
      if (*(int *)(in_ECX[1] + 0xe1c) == 0) {
        (**(code **)(in_ECX[1] + 0x1c))();
      }
      bVar1 = false;
    }
  } while( true );
}

