// rea decompile_all
// name: FUN_0066a2e0
// address: 0x66a2e0
// body: available
// range: 0x66a2e0-0x66a452 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066a2e0(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 *puVar6;
  int local_10;
  
  bVar3 = true;
  puVar4 = (undefined4 *)(**(code **)in_ECX[1])();
  in_ECX[0x55] = (int)puVar4;
  *puVar4 = &DAT_0066ac60;
  puVar4[1] = FUN_0066ab70;
  *(undefined1 *)(puVar4 + 2) = 0;
  if (*(char *)((int)in_ECX + 0xb3) != '\0') {
    *(undefined4 *)(*in_ECX + 0x14) = 0x19;
    (**(code **)*in_ECX)();
  }
  local_10 = 0;
  if (0 < in_ECX[0xf]) {
    piVar5 = (int *)(in_ECX[0x11] + 0xc);
    puVar6 = puVar4 + 3;
    bVar3 = true;
    do {
      iVar1 = in_ECX[0x36];
      if ((piVar5[-1] == iVar1) && (*piVar5 == in_ECX[0x37])) {
        if (in_ECX[0x2d] == 0) {
          *puVar6 = FUN_0066a9b0;
        }
        else {
          *puVar6 = FUN_0066a460;
          *(undefined1 *)(puVar4 + 2) = 1;
        }
      }
      else {
        iVar2 = piVar5[-1] * 2;
        if (iVar2 == iVar1) {
          if (*piVar5 == in_ECX[0x37]) {
            bVar3 = false;
            *puVar6 = FUN_0066a910;
          }
          else {
            if ((iVar2 != iVar1) || (*piVar5 * 2 != in_ECX[0x37])) goto LAB_0066a3db;
            if (in_ECX[0x2d] == 0) {
              *puVar6 = FUN_0066a850;
            }
            else {
              *puVar6 = FUN_0066a5c0;
              *(undefined1 *)(puVar4 + 2) = 1;
            }
          }
        }
        else {
LAB_0066a3db:
          if ((iVar1 % piVar5[-1] == 0) && (in_ECX[0x37] % *piVar5 == 0)) {
            bVar3 = false;
            *puVar6 = FUN_0066aa20;
          }
          else {
            *(undefined4 *)(*in_ECX + 0x14) = 0x26;
            (**(code **)*in_ECX)();
          }
        }
      }
      puVar6 = puVar6 + 1;
      local_10 = local_10 + 1;
      piVar5 = piVar5 + 0x15;
    } while (local_10 < in_ECX[0xf]);
  }
  if ((in_ECX[0x2d] != 0) && (!bVar3)) {
    *(undefined4 *)(*in_ECX + 0x14) = 99;
    (**(code **)(*in_ECX + 4))();
  }
  return;
}

