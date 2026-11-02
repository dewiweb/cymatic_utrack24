// rea decompile_all
// name: FUN_00437230
// address: 0x437230
// body: available
// range: 0x437230-0x437394 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00437230(void)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  int *in_ECX;
  
  iVar5 = FUN_0062c730("MidiUnityNote",1,0);
  if (-1 < iVar5) {
    if (in_ECX[1] != 0x14) {
      if (*in_ECX == 0) {
        FID_conflict__free((void *)0x0);
        iVar5 = FUN_004c5556(0x14,1);
        *in_ECX = iVar5;
      }
      else {
        iVar5 = FUN_004c553b(*in_ECX,0x14);
        *in_ECX = iVar5;
        uVar1 = in_ECX[1];
        if (uVar1 < 0x14) {
          _memset((void *)(iVar5 + uVar1),0,0x14 - uVar1);
        }
      }
      in_ECX[1] = 0x14;
    }
    puVar2 = (undefined1 *)*in_ECX;
    uVar3 = FUN_004371a0(&DAT_00c146f8);
    *puVar2 = uVar3;
    uVar3 = FUN_004371a0(&DAT_00c146fc);
    puVar2[1] = uVar3;
    uVar3 = FUN_004371a0(&DAT_00c146fc);
    puVar2[2] = uVar3;
    uVar3 = FUN_004371a0(&DAT_00c14700);
    puVar2[3] = uVar3;
    uVar3 = FUN_004371a0(&DAT_00c14704);
    puVar2[4] = uVar3;
    uVar3 = FUN_004371a0(&DAT_00c14700);
    puVar2[5] = uVar3;
    uVar4 = FUN_00437100();
    *(undefined2 *)(puVar2 + 6) = uVar4;
    uVar4 = FUN_00437100();
    *(undefined2 *)(puVar2 + 8) = uVar4;
    uVar4 = FUN_00437100();
    *(undefined2 *)(puVar2 + 10) = uVar4;
    uVar4 = FUN_00437100();
    *(undefined2 *)(puVar2 + 0xc) = uVar4;
    uVar4 = FUN_00437100();
    *(undefined2 *)(puVar2 + 0xe) = uVar4;
    uVar4 = FUN_00437100();
    *(undefined2 *)(puVar2 + 0x10) = uVar4;
    uVar4 = FUN_00437100();
    *(undefined2 *)(puVar2 + 0x12) = uVar4;
  }
  return;
}

