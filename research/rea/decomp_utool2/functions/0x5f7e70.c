// rea decompile_all
// name: FUN_005f7e70
// address: 0x5f7e70
// body: available
// range: 0x5f7e70-0x5f7f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f7e70(void)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  size_t _Size;
  undefined1 *in_EDX;
  undefined1 *_Dst;
  
  uVar2 = *(uint *)(in_EDX + 0x50);
  puVar1 = in_EDX + (uVar2 & 0x3f);
  *puVar1 = 0x80;
  iVar3 = -(uVar2 & 0x3f);
  _Size = iVar3 + 0x37;
  _Dst = puVar1 + 1;
  if ((int)_Size < 0) {
    _memset(puVar1 + 1,0,iVar3 + 0x3f);
    FUN_005f8020();
    _Size = 0x38;
    _Dst = in_EDX;
  }
  _memset(_Dst,0,_Size);
  *(uint *)(in_EDX + 0x38) = *(uint *)(in_EDX + 0x50) * 8;
  *(uint *)(in_EDX + 0x3c) = *(int *)(in_EDX + 0x54) << 3 | *(uint *)(in_EDX + 0x50) >> 0x1d;
  FUN_005f8020();
  uVar4 = *(undefined4 *)(in_EDX + 0x44);
  uVar5 = *(undefined4 *)(in_EDX + 0x48);
  uVar6 = *(undefined4 *)(in_EDX + 0x4c);
  *in_ECX = *(undefined4 *)(in_EDX + 0x40);
  in_ECX[1] = uVar4;
  in_ECX[2] = uVar5;
  in_ECX[3] = uVar6;
  if (*(void **)(in_EDX + 0x58) != (void *)0x0) {
    FID_conflict__free(*(void **)(in_EDX + 0x58));
    *(undefined4 *)(in_EDX + 0x58) = 0;
    *(undefined4 *)(in_EDX + 0x5c) = 0;
  }
  _memset(in_EDX,0,0x60);
  return;
}

