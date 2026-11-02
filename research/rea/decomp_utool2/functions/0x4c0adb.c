// rea decompile_all
// name: ___isa_available_init
// address: 0x4c0adb
// body: available
// range: 0x4c0adb-0x4c0c74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004c0b1c) */
/* WARNING: Removing unreachable block (ram,0x004c0bcc) */
/* WARNING: Removing unreachable block (ram,0x004c0b56) */
/* Library Function - Single Match
    ___isa_available_init
   
   Library: Visual Studio 2015 Release */

undefined4 ___isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint in_XCR0;
  uint local_14;
  uint local_10;
  
  DAT_00c89e14 = 0;
  DAT_00c76080 = DAT_00c76080 | 1;
  BVar6 = IsProcessorFeaturePresent(10);
  uVar5 = DAT_00c76080;
  if (BVar6 != 0) {
    local_14 = 0;
    DAT_00c76080 = DAT_00c76080 | 2;
    DAT_00c89e14 = 1;
    piVar1 = (int *)cpuid_basic_info(0);
    puVar2 = (uint *)cpuid_Version_info(1);
    uVar8 = puVar2[3];
    if (((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) &&
       (((((uVar7 = *puVar2 & 0xfff3ff0, uVar7 == 0x106c0 || (uVar7 == 0x20660)) ||
          (uVar7 == 0x20670)) || ((uVar7 == 0x30650 || (uVar7 == 0x30660)))) || (uVar7 == 0x30670)))
       ) {
      DAT_00c89e18 = DAT_00c89e18 | 1;
    }
    if (6 < *piVar1) {
      iVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      local_14 = *(uint *)(iVar3 + 4);
      if ((local_14 & 0x200) != 0) {
        DAT_00c89e18 = DAT_00c89e18 | 2;
      }
    }
    if ((uVar8 & 0x100000) != 0) {
      DAT_00c76080 = uVar5 | 6;
      DAT_00c89e14 = 2;
      if (((uVar8 & 0x8000000) != 0) && ((uVar8 & 0x10000000) != 0)) {
        uVar4 = xinuse(0);
        local_10 = in_XCR0 & (uint)uVar4;
        if ((local_10 & 6) == 6) {
          DAT_00c76080 = uVar5 | 0xe;
          DAT_00c89e14 = 3;
          if ((local_14 & 0x20) != 0) {
            DAT_00c76080 = uVar5 | 0x2e;
            DAT_00c89e14 = 5;
          }
        }
      }
    }
  }
  return 0;
}

